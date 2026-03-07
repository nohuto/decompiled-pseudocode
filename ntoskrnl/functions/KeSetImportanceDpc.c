void __stdcall KeSetImportanceDpc(PRKDPC Dpc, KDPC_IMPORTANCE Importance)
{
  Dpc->Importance = Importance;
}
