__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rcx

  dword_140D17418 = *(_DWORD *)a4;
  dword_140D1741C = *(_DWORD *)(a4 + 4);
  dword_140D17420 = *(_DWORD *)(a4 + 8);
  dword_140D17424 = *(_DWORD *)(a4 + 12);
  dword_140D1742C = *(_DWORD *)(a4 + 16);
  dword_140D17430 = *(_DWORD *)(a4 + 20);
  dword_140D17434 = *(_DWORD *)(a4 + 24);
  word_140D1743E = *(_WORD *)(a4 + 28);
  word_140D17438 = *(_WORD *)(a4 + 30);
  word_140D1743A = a2;
  dword_140D17414 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      v5 = *((_DWORD *)&XmContext + 5);
      if ( v5 > *((unsigned __int16 *)&XmContext + 35) )
        longjmp((_JBTYPE *)&XmContext + 10, 14);
      *((_WORD *)&XmContext + 10) = v5 + 1;
      v6 = *(unsigned __int8 *)x86BiosTranslateAddress(*((unsigned __int16 *)&XmContext + 29), (unsigned __int16)v5);
      *((_DWORD *)&XmContext + 28) = v6;
      LOWORD(v6) = *(_WORD *)(XmContext + 2 * v6);
      *((_WORD *)&XmContext + 40) = v6;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v6;
    }
    while ( !((unsigned int (__fastcall *)(void *))XmOperandDecodeTable[*((unsigned __int8 *)&XmContext + 81)])(&XmContext) );
    ((void (__fastcall *)(void *))XmOpcodeFunctionTable[*((unsigned int *)&XmContext + 31)])(&XmContext);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
