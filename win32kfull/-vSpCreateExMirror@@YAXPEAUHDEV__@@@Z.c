void __fastcall vSpCreateExMirror(HDEV a1)
{
  if ( a1 )
  {
    if ( !*((_QWORD *)a1 + 176) )
      *((_QWORD *)a1 + 176) = psoSpCreateSurface(
                                (struct _SPRITESTATE *)(a1 + 20),
                                0,
                                *(_DWORD *)(*((_QWORD *)a1 + 14) + 32LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 14) + 36LL));
  }
}
