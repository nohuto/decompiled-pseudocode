void __fastcall EngCloseFNTCache(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  _DWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(_DWORD *)(v1 + 19384);
  if ( (v2 & 3) != 0 )
  {
    v3 = *(_DWORD **)(v1 + 19392);
    if ( v3 )
    {
      if ( (v2 & 2) != 0 && *(_QWORD *)v3 && v3[5] )
      {
        *(_DWORD *)(*(_QWORD *)v3 + 20LL) = v3[2];
        *(_DWORD *)(**(_QWORD **)(v1 + 19392) + 36LL) = *(_DWORD *)(*(_QWORD *)(v1 + 19392) + 32LL)
                                                      - *(_DWORD *)(*(_QWORD *)(v1 + 19392) + 24LL);
        ***(_DWORD ***)(v1 + 19392) = ComputeFileviewCheckSum(
                                        **(_QWORD **)(v1 + 19392) + 4LL,
                                        (unsigned int)(*(_DWORD *)(**(_QWORD **)(v1 + 19392) + 24LL) - 4));
      }
      v4 = *(_QWORD *)(v1 + 19392);
      v5 = *(_DWORD *)(v4 + 16);
      if ( (*(_DWORD *)(v1 + 19384) & 2) != 0 )
      {
        if ( *(_DWORD *)(v4 + 12) != v5 )
          bSetFntCacheReg(1LL);
        v6 = 0LL;
      }
      else
      {
        if ( (v5 & 3) == 0 )
        {
LABEL_6:
          vCleanUpFntCacheInternal(v4);
          return;
        }
        v6 = 1LL;
      }
      bSetFntCacheReg(v6);
      goto LABEL_6;
    }
  }
  *(_DWORD *)(v1 + 19384) = 0;
  *(_BYTE *)(v1 + 19404) = 1;
}
