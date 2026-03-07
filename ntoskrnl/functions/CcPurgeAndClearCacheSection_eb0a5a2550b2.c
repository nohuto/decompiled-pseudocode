__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r14
  __int64 v4; // r13
  BOOLEAN v5; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rbx
  struct _KEVENT *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-78h] BYREF
  LONGLONG v13; // [rsp+38h] [rbp-70h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-68h] BYREF
  void *VirtualAddress; // [rsp+50h] [rbp-58h]
  _OWORD v16[5]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  v13 = 0LL;
  v16[0] = 0LL;
  v14[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v4 = CcReferenceSharedCacheMapFileObject(a1);
  v14[1] = v4;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v13 = v2->QuadPart;
  v2 = (LARGE_INTEGER *)&v13;
  if ( *(_QWORD *)(a1 + 176) && *(_QWORD *)(a1 + 88) )
  {
    v8 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, v14, &v12, 1, 0);
    memset(VirtualAddress, 0, v8);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx(VirtualAddress, 1LL);
      LOBYTE(v11) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v11);
    }
    else
    {
      CcSetDirtyInMask(a1, &v13, v8, 0LL);
    }
    v13 = v8 + QuadPart;
    v9 = *(_QWORD *)(v14[0] + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v14[0] + 16)) )
    {
      v10 = *(struct _KEVENT **)(v9 + 192);
      if ( v10 )
        KeSetEvent(v10, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 552));
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v4 + 40), &v13, 1LL, 0LL, v16, 0);
  result = LODWORD(v16[0]);
  if ( SLODWORD(v16[0]) >= 0 )
  {
LABEL_3:
    v5 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), v2, 0, 0);
    ObFastDereferenceObjectDeferDelete(a1 + 96, v4, 1666409283LL);
    return v5 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
