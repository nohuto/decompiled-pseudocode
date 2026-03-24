/*
 * XREFs of ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0140AAC
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01408C8 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vNextPoint@LINER@@AEAAXXZ @ 0x1C0140B8C (-vNextPoint@LINER@@AEAAXXZ.c)
 */

void __fastcall LINER::vNextEvent(LINER *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // xmm1_8
  int v8; // edx

  *(_QWORD *)((char *)this + 692) = *((_QWORD *)this + 28);
  *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
  LINER::vNextPoint(this);
  v2 = *((_QWORD *)this + 89);
  v3 = *((_DWORD *)this + 172);
  if ( !*(_DWORD *)(v2 + 40) )
  {
    v4 = *((_QWORD *)this + 89);
    do
    {
      v2 = v4;
      if ( *(_DWORD *)(v4 + 44) )
        break;
      v8 = *((_DWORD *)this + 172);
      if ( v8 )
      {
        if ( v8 != 3 && v8 != 4 )
          break;
      }
      LINER::vNextPoint(this);
      v2 = *((_QWORD *)this + 89);
      v4 = v2;
    }
    while ( !*(_DWORD *)(v2 + 40) );
  }
  if ( !*(_DWORD *)(v2 + 48) && !*(_DWORD *)(v2 + 52) )
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v5 = *((_DWORD *)this + 172);
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
        v6 = *((_QWORD *)this + 89);
        *((_OWORD *)this + 15) = *(_OWORD *)v6;
        *((_OWORD *)this + 16) = *(_OWORD *)(v6 + 16);
        *((_OWORD *)this + 17) = *(_OWORD *)(v6 + 32);
        *((_OWORD *)this + 18) = *(_OWORD *)(v6 + 48);
        *((_OWORD *)this + 19) = *(_OWORD *)(v6 + 64);
        v7 = *(_QWORD *)(v6 + 80);
        *((_DWORD *)this + 172) = 0;
        *((_QWORD *)this + 40) = v7;
        *((_QWORD *)this + 89) = (char *)this + 240;
        return;
      }
      LINER::vNextPoint(this);
    }
    *((_DWORD *)this + 71) = 0;
    *((_DWORD *)this + 60) = 0;
    *((_DWORD *)this + 73) = 0;
    *((_DWORD *)this + 70) = 16;
    *((_DWORD *)this + 72) = 16;
    *((_QWORD *)this + 88) = (char *)this + 240;
    *((_QWORD *)this + 89) = (char *)this + 240;
    *((_DWORD *)this + 172) = 7;
  }
}
