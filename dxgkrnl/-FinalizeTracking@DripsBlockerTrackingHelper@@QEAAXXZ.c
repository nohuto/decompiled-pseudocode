void __fastcall DripsBlockerTrackingHelper::FinalizeTracking(DripsBlockerTrackingHelper *this)
{
  unsigned int v2; // esi
  char *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( !*((_BYTE *)this + 302128) )
  {
    v2 = 0;
    v3 = (char *)this + 56;
    v4 = -56LL - (_QWORD)this;
    do
    {
      if ( v3[48] )
      {
        *(_QWORD *)v3 = 0LL;
        v5 = 0LL;
        *((_QWORD *)v3 + 1) = 0LL;
        *((_QWORD *)v3 + 2) = 0LL;
        *((_QWORD *)v3 + 3) = 0LL;
        *((_DWORD *)v3 + 8) = 0;
        *((_DWORD *)v3 + 9) = 0;
        for ( *((_DWORD *)v3 + 10) = 0;
              (unsigned int)v5 < *((_DWORD *)v3 - 3);
              *((_DWORD *)v3 + 10) += *(_DWORD *)((char *)this + v7 + 176) )
        {
          if ( *(_DWORD *)&v3[72 * v5 + 144 + v4 + (_QWORD)this] )
            DripsBlockerTrackingHelper::EnableEntryAccounting(this, v2, v5, 0);
          v6 = 9 * v5;
          v5 = (unsigned int)(v5 + 1);
          v7 = (__int64)&v3[8 * v6 + v4];
          *(_QWORD *)v3 += *(_QWORD *)((char *)this + v7 + 128);
          *((_QWORD *)v3 + 1) += *(_QWORD *)((char *)this + v7 + 136);
          *((_QWORD *)v3 + 2) += *(_QWORD *)((char *)this + v7 + 152);
          *((_QWORD *)v3 + 3) += *(_QWORD *)((char *)this + v7 + 160);
          *((_DWORD *)v3 + 8) += *(_DWORD *)((char *)this + v7 + 168);
          *((_DWORD *)v3 + 9) += *(_DWORD *)((char *)this + v7 + 148);
        }
      }
      ++v2;
      v3 += 4720;
    }
    while ( v2 < 0x40 );
  }
}
