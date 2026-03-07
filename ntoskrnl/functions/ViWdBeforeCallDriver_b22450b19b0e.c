void __fastcall ViWdBeforeCallDriver(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax

  if ( !*a3 && *(_BYTE *)(a1 + 64) == 1 && (unsigned int)VfTargetDriversIsEnabled(a2) && ViWdInitialized )
  {
    v5 = ExAllocateFromNPagedLookasideList(&ViWdIrpLookasideList);
    if ( v5 )
    {
      v5[2] = a1;
      *((_BYTE *)v5 + 29) = *(_BYTE *)(a1 + 67);
      *((_BYTE *)v5 + 28) = 0;
      *a3 = v5;
    }
  }
}
