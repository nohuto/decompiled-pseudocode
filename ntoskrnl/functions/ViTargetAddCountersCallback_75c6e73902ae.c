__int64 __fastcall ViTargetAddCountersCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( *(_QWORD *)v2 == *(_QWORD *)a2 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v3 + 96) += *(_DWORD *)(v2 + 112);
      *(_DWORD *)(v3 + 100) += *(_DWORD *)(v2 + 116);
      *(_DWORD *)(v3 + 104) += *(_DWORD *)(v2 + 120);
      *(_DWORD *)(v3 + 108) += *(_DWORD *)(v2 + 124);
      *(_QWORD *)(v3 + 112) += *(_QWORD *)(v2 + 128);
      *(_QWORD *)(v3 + 120) += *(_QWORD *)(v2 + 136);
      *(_QWORD *)(v3 + 128) += *(_QWORD *)(v2 + 144);
      *(_QWORD *)(v3 + 136) += *(_QWORD *)(v2 + 152);
      if ( *(_DWORD *)(a2 + 16) )
      {
        v4 = (_QWORD *)(v3 + 168);
        *(_DWORD *)(v3 + 144) += *(_DWORD *)(v2 + 160);
        v5 = 10LL;
        *(_DWORD *)(v3 + 148) += *(_DWORD *)(v2 + 164);
        *(_DWORD *)(v3 + 152) += *(_DWORD *)(v2 + 168);
        *(_DWORD *)(v3 + 156) += *(_DWORD *)(v2 + 172);
        *(_DWORD *)(v3 + 160) += *(_DWORD *)(v2 + 176);
        *(_DWORD *)(v3 + 164) += *(_DWORD *)(v2 + 180);
        do
        {
          *v4 += *(_QWORD *)((char *)v4 + v2 - v3 + 16);
          ++v4;
          --v5;
        }
        while ( v5 );
        *(_DWORD *)(v3 + 248) += *(_DWORD *)(v2 + 280);
        *(_DWORD *)(v3 + 252) += *(_DWORD *)(v2 + 284);
        *(_DWORD *)(v3 + 256) += *(_DWORD *)(v2 + 288);
        *(_DWORD *)(v3 + 260) += *(_DWORD *)(v2 + 292);
        *(_DWORD *)(v3 + 264) += *(_DWORD *)(v2 + 296);
        *(_DWORD *)(v3 + 268) += *(_DWORD *)(v2 + 300);
      }
    }
  }
  return 1LL;
}
