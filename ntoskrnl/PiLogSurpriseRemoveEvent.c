int __fastcall PiLogSurpriseRemoveEvent(__int64 a1, int a2, int **a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  const wchar_t *v6; // r9
  int *v7; // rax
  int v8; // edx

  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    v4 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  v6 = *(const wchar_t **)(v4 + 48);
  v7 = *a3;
  v8 = **a3;
  if ( a2 == 3 )
  {
    if ( (byte_140C0E10C & 2) != 0 )
      LODWORD(v7) = McTemplateK0zq_EtwWriteTransfer(
                      a1,
                      (const EVENT_DESCRIPTOR *)KMPnPEvt_SurpriseRemove_Missing,
                      (const GUID *)(a1 + 88),
                      v6,
                      v8);
  }
  else
  {
    if ( a2 != 5 )
      __fastfail(5u);
    if ( (byte_140C0E10C & 1) != 0 )
      LODWORD(v7) = McTemplateK0zq_EtwWriteTransfer(
                      a1,
                      (const EVENT_DESCRIPTOR *)KMPnPEvt_SurpriseRemove_Failed,
                      (const GUID *)(a1 + 88),
                      v6,
                      v8);
  }
  return (int)v7;
}
