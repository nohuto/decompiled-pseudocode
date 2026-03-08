/*
 * XREFs of ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C007CB8C
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 */

void __fastcall CMouseProcessor::ComputeUIPIForMouseEvent(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  int v2; // ebx
  char v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc)
    && *((_BYTE *)a2 + 128) )
  {
    v4 = 1;
    v6 = *(_QWORD *)((char *)a2 + 116);
    LOBYTE(v2) = *((_DWORD *)a2 + 31) != 0;
  }
  else
  {
    v4 = 0;
    if ( gptiCurrent )
    {
      v5 = *((_QWORD *)gptiCurrent + 53);
      v6 = *(_QWORD *)(v5 + 864);
      v2 = *(_DWORD *)(v5 + 12) >> 31;
    }
    else
    {
      v6 = 0xFFFFFFFFLL;
    }
  }
  DWORD2(v7) = v2;
  *(_QWORD *)&v7 = v6;
  BYTE12(v7) = v4;
  *(_OWORD *)((char *)a2 + 132) = v7;
}
