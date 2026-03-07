void __fastcall SetCurrentHitTargetMonitor(struct MOVESIZEDATA *a1, struct tagMONITOR *a2, int a3)
{
  int v3; // eax

  if ( a3 )
  {
    v3 = *((_DWORD *)a1 + 50);
    if ( (v3 & 0x1000000) == 0 )
    {
      *((_QWORD *)a1 + 26) = a2;
      if ( (v3 & 0x20) == 0 )
        *((_DWORD *)a1 + 50) = v3 | 0x4000000;
    }
  }
  *((_QWORD *)a1 + 29) = a2;
}
