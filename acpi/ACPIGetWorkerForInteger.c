void __fastcall ACPIGetWorkerForInteger(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int v5; // ebx
  unsigned int *v6; // rdx
  unsigned int v8; // ebp
  __int64 v11; // rcx
  _DWORD *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _DWORD *v16; // rax
  void (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v18; // al
  __int64 v19; // r9
  _QWORD *v20; // r8

  v5 = a2;
  v6 = (unsigned int *)*((_QWORD *)a4 + 7);
  v8 = a2 >> 31;
  if ( !v6 )
  {
    v5 = -1073741670;
    goto LABEL_24;
  }
  v11 = (unsigned int)*a4;
  if ( (v11 & 0x400) == 0 )
  {
    if ( (v11 & 0x800) != 0 )
    {
      v15 = ACPIGetConvertToDevicePresence(*((_QWORD *)a4 + 3), (unsigned int)v5, a3, v11, v6, *((_DWORD **)a4 + 8));
    }
    else
    {
      if ( (v11 & 0x8000) == 0 )
      {
        if ( v5 < 0 )
          goto LABEL_24;
        if ( (v11 & 0x4000) == 0 || *(_WORD *)(a3 + 2) == 1 )
        {
          *v6 = *(_DWORD *)(a3 + 16);
          v16 = (_DWORD *)*((_QWORD *)a4 + 8);
          if ( v16 )
            *v16 = 4;
          goto LABEL_23;
        }
        goto LABEL_20;
      }
      v15 = ACPIGetConvertToClassCode(v11, v5, a3, (__int64)a4, (unsigned __int64 *)v6, *((_DWORD **)a4 + 8));
    }
    v5 = v15;
    goto LABEL_24;
  }
  v12 = (_DWORD *)*((_QWORD *)a4 + 8);
  if ( (v11 & 0x4000000) == 0 )
  {
    v13 = *((_QWORD *)a4 + 3);
    if ( _bittest64((const signed __int64 *)(v13 + 8), 0x3Du) )
    {
      v14 = *(_QWORD *)(v13 + 608);
      goto LABEL_10;
    }
  }
  if ( v5 < 0 )
    goto LABEL_24;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
LABEL_20:
    v5 = -1072431089;
    goto LABEL_24;
  }
  v14 = *(_QWORD *)(a3 + 16);
LABEL_10:
  *(_QWORD *)v6 = v14;
  if ( v12 )
    *v12 = 8;
LABEL_23:
  v5 = 0;
LABEL_24:
  a4[18] = v5;
  if ( !(_BYTE)v8 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1LL);
  }
  if ( (*a4 & 0x10000000) == 0 )
  {
    v17 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v17 )
      v17(a1, (unsigned int)v5, 0LL, *((_QWORD *)a4 + 6));
    v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v19 = *((_QWORD *)a4 + 1);
    if ( *(_DWORD **)(v19 + 8) != a4 + 2 || (v20 = (_QWORD *)*((_QWORD *)a4 + 2), (_DWORD *)*v20 != a4 + 2) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    KeReleaseSpinLock(&AcpiGetLock, v18);
    ExFreePoolWithTag(a4, 0);
  }
}
