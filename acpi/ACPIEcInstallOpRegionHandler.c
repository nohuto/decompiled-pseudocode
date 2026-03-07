__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(*(_QWORD *)(a1 + 56), 2, 3, (unsigned int)ACPIEcOpRegionHandler, a1, a1 + 80);
}
