char HalpRestoreDmaControllerState()
{
  __int64 i; // rbx
  void (__fastcall *v1)(__int64); // rax
  __int64 v2; // rcx
  char result; // al

  for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
  {
    v1 = *(void (__fastcall **)(__int64))(i + 80);
    v2 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    v1(v2);
  }
  result = HalpMiscIsLegacyPcType();
  if ( result )
    return HalpRestoreLegacyDmaControllerState();
  return result;
}
