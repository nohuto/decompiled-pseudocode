void __fastcall PdcPoSleepStudyHelperSetPhaseActive(int a1, char a2)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( !a1 )
  {
    v2 = 224LL;
LABEL_3:
    SshpSetCollectionActive((ULONG_PTR)&SshpBlockerCollections + v2, a2);
    return;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    v2 = 32LL;
    goto LABEL_3;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v2 = 64LL;
    goto LABEL_3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v2 = 96LL;
    goto LABEL_3;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v2 = 128LL;
    goto LABEL_3;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v2 = 160LL;
    goto LABEL_3;
  }
  if ( v7 == 3 )
  {
    v2 = 192LL;
    goto LABEL_3;
  }
}
