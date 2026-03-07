__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, __int64 a2, char a3, __int64 *a4, _DWORD *a5)
{
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // r9
  bool v12; // r12
  int v13; // esi
  __int64 v14; // r10
  int v15; // r15d
  __int64 v16; // rax
  int v17; // edx
  int v18; // r10d
  __int64 Handle; // r14
  int v20; // edx
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  _QWORD v28[2]; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable(a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v29 = *((_DWORD *)a1 + 6);
    v13 = ObpIncrementHandleCountEx(2, (unsigned int)&v29, a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v28[1] = v28;
      v28[0] = v28;
      v27 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v29, *((_DWORD *)a1 + 9), (__int64)a1 + 28);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && SeAuditingWithTokenForSubcategory(123, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x7544624Fu);
          ObpDecrementHandleCount((PRKPROCESS)a2);
          v13 = -1073741670;
        }
        if ( v12 )
          Handle |= 0xFFFFFFFF80000000uLL;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112));
        if ( (_QWORD *)v28[0] != v28 )
        {
          LOBYTE(v20) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v20, v13, v29, (__int64)v28);
        }
        if ( v13 >= 0 )
        {
          v21 = a5;
          v22 = v29;
          *a4 = Handle;
          *v21 = v22;
        }
        if ( (xmmword_140D1EAD0 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 1088), *(_DWORD *)(a2 + 1088), v27);
        return (unsigned int)v13;
      }
      v24 = *a1;
      LOBYTE(v17) = v12;
      v26 = v29;
      v13 = ObpPreInterceptHandleDuplicate(v18, v17, (unsigned int)&v26, v24, a2, (__int64)v28);
      if ( v13 >= 0 )
      {
        v25 = v29;
        if ( !v12 )
          v25 = v26;
        v29 = v25;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((PRKPROCESS)a2);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1112));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
