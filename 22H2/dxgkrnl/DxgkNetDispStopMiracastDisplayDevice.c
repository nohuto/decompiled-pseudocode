/*
 * XREFs of DxgkNetDispStopMiracastDisplayDevice @ 0x1C0225520
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0009A28 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003E704 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003ED48 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0056708 (DxgkMiracastStopMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStopMiracastDisplayDevice(unsigned __int16 *a1, HANDLE Handle)
{
  WCHAR *v4; // rsi
  struct _KEVENT *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  SIZE_T v24; // rax
  WCHAR *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  size_t v31; // rbx
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  WCHAR *v37; // [rsp+40h] [rbp-38h]
  __int64 v38; // [rsp+48h] [rbp-30h]
  unsigned __int64 v39; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v37 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return 2147483656LL;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v39 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v17 = RtlStringCchLengthW(a1, 0x208uLL, &v39);
    v21 = v17;
    if ( v17 >= 0 )
    {
      v23 = v39;
      v24 = 2 * (v39 + 1);
      if ( !is_mul_ok(v39 + 1, 2uLL) )
        v24 = -1LL;
      v25 = (WCHAR *)operator new[](v24, 0x4B677844u, PagedPool);
      v4 = v25;
      v37 = v25;
      if ( v25 )
      {
        v31 = v23;
        memmove(v25, a1, v31 * 2);
        v4[v31] = 0;
        if ( Handle
          && (Object = 0LL,
              v32 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v5 = (struct _KEVENT *)Object,
              v32 < 0) )
        {
          v15 = -2147483640;
          v35 = WdLogNewEntry5_WdError(v34, v33);
          *(_QWORD *)(v35 + 24) = Handle;
          WdLogEvent5_WdError(v35);
        }
        else
        {
          v15 = DxgkMiracastStopMiracastSession(v4, v5);
        }
      }
      else
      {
        v15 = -2147483638;
        v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
        *(_QWORD *)(v30 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v30);
      }
    }
    else
    {
      v15 = -2147483640;
      v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdWarning(v22);
    }
  }
  else
  {
    v15 = -2147483643;
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v16);
  }
  if ( v4 )
    operator delete[](v4);
  return v15;
}
