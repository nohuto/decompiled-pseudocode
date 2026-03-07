__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, volatile signed __int32 *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx

  v5 = a2;
  _InterlockedIncrement(a4 + 6);
  if ( a2 >= 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      while ( 1 )
      {
        v6 = *((_DWORD *)a4 + 4);
        if ( (v6 & 0x800) == 0 )
        {
          v7 = *((_QWORD *)a4 + 1);
          *((_DWORD *)a4 + 4) = v6 | 0x800;
          v8 = IsPciDevice(v7, GetOpRegionScopeWorker, a4, a4 + 5);
          v5 = v8;
          if ( v8 == 259 )
            return 259LL;
          if ( v8 < 0 )
            goto LABEL_9;
        }
        *((_DWORD *)a4 + 4) &= ~0x800u;
        v9 = *((_QWORD *)a4 + 1);
        if ( *((_BYTE *)a4 + 20) )
          break;
        v10 = AMLIIterateParentNext(v9);
        *((_QWORD *)a4 + 1) = v10;
        if ( !v10 )
          goto LABEL_8;
      }
      **((_QWORD **)a4 + 6) = v9;
      v13 = **((_QWORD **)a4 + 6);
      dword_1C006F938 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v5 = 0;
    }
    else
    {
LABEL_8:
      v5 = -1073741275;
    }
  }
LABEL_9:
  if ( *((_DWORD *)a4 + 6) )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a4 + 4))(*(_QWORD *)a4, v5, 0LL, *((_QWORD *)a4 + 5));
  if ( *(_QWORD *)a4 )
  {
    AMLIDereferenceHandleEx(*(_QWORD *)a4);
    *(_QWORD *)a4 = 0LL;
  }
  v11 = *((_QWORD *)a4 + 1);
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    *((_QWORD *)a4 + 1) = 0LL;
  }
  ExFreePoolWithTag((PVOID)a4, 0x46706341u);
  return v5;
}
