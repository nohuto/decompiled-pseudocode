void __fastcall UpdateTopLevelWindowDPITransform(const struct tagWND *a1, __int64 a2)
{
  void *v4; // rcx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
    goto LABEL_2;
  memset_0(v9, 0, sizeof(v9));
  if ( !(unsigned int)GetMonitorTransform(a2, a1, (__int64)v9) )
    goto LABEL_2;
  if ( !*((_QWORD *)a1 + 27) )
    *((_QWORD *)a1 + 27) = Win32AllocPoolWithQuotaZInit(64LL, 2020438869LL);
  v5 = (_OWORD *)*((_QWORD *)a1 + 27);
  if ( v5 )
  {
    v6 = v9[1];
    *v5 = v9[0];
    v7 = v9[2];
    v5[1] = v6;
    v8 = v9[3];
    v5[2] = v7;
    v5[3] = v8;
  }
  else
  {
LABEL_2:
    v4 = (void *)*((_QWORD *)a1 + 27);
    if ( v4 )
    {
      Win32FreePool(v4);
      *((_QWORD *)a1 + 27) = 0LL;
    }
  }
}
