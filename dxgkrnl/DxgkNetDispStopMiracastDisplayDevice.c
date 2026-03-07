__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r12
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  WCHAR *v13; // rax
  size_t v14; // rbx
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent(v6);
  LODWORD(Object) = DxgkNetDispAccessCheck(Current);
  if ( (int)Object >= 0 )
  {
    v17 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v10 = RtlStringCchLengthW(a1, 0x208uLL, &v17);
    if ( v10 >= 0 )
    {
      v11 = v17;
      v12 = 2 * (v17 + 1);
      if ( !is_mul_ok(v17 + 1, 2uLL) )
        v12 = -1LL;
      v13 = (WCHAR *)operator new[](v12, 0x4B677844u, 256LL);
      v4 = v13;
      if ( v13 )
      {
        v14 = v11;
        memmove(v13, a1, v14 * 2);
        v4[v14] = 0;
        if ( Handle
          && (Object = 0LL,
              v15 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v15 < 0) )
        {
          v9 = -2147483640;
          WdLogSingleEntry1(2LL, Handle);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)Handle,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v9 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v9 = -2147483638;
        WdLogSingleEntry1(6LL, -2147483638LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate buffer for LocalDeviceName, returning 0x%I64x",
          -2147483638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v9 = -2147483640;
      WdLogSingleEntry1(3LL, v10);
    }
  }
  else
  {
    v9 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
  }
  if ( v4 )
    operator delete(v4);
  return v9;
}
