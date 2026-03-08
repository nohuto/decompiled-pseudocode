/*
 * XREFs of ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02B72DC
 * Callers:
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0114DE0 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1C0278FB0 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 */

struct PFE *__fastcall ppfeFromUFI(struct _UNIVERSAL_FONT_ID *a1)
{
  __int64 v2; // rdi
  struct _HASHBUCKET *v3; // rax
  _QWORD *i; // rbx
  _DWORD *v5; // rsi
  int v6; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v8[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 20272LL) + 16LL;
  v8[1] = *(_QWORD *)v8[0];
  v3 = FHOBJ::pbktSearch((FHOBJ *)v8, 0LL, 0LL, a1, 0);
  if ( v3 )
  {
    for ( i = (_QWORD *)*((_QWORD *)v3 + 1); i; i = (_QWORD *)*i )
    {
      v5 = (_DWORD *)i[1];
      v6 = *(_DWORD *)a1;
      v9 = v5;
      if ( v5[21] == v6
        && v5[22] == *((_DWORD *)a1 + 1)
        && (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v9)
        && (v5[3] & 2) == 0 )
      {
        return (struct PFE *)i[1];
      }
    }
  }
  return (struct PFE *)v2;
}
