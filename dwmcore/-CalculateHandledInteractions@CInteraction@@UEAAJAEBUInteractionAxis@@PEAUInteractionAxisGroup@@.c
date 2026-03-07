__int64 __fastcall CInteraction::CalculateHandledInteractions(
        __int64 a1,
        __int128 *a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _OWORD *a8)
{
  int v9; // edi
  __int64 v10; // rcx

  v9 = CInteractionProcessor::CalculateHandledInteractions(
         (CInteractionProcessor *)(a1 + 288),
         a2,
         a3,
         a4,
         a5,
         a6,
         (__int64)a7,
         a8);
  if ( v9 >= 0 && *a7 == 1 )
  {
    v10 = *(_QWORD *)(a1 + 208);
    if ( v10 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 72) + 48LL))(v10 + 72) )
        *a7 = 2;
    }
  }
  return (unsigned int)v9;
}
