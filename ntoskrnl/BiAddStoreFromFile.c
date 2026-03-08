/*
 * XREFs of BiAddStoreFromFile @ 0x14082BDE4
 * Callers:
 *     BiLoadSystemStore @ 0x14082B7EC (BiLoadSystemStore.c)
 *     BcdOpenStore @ 0x14082C814 (BcdOpenStore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 *     BiCreateKey @ 0x14082D580 (BiCreateKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiLoadHive @ 0x1408306AC (BiLoadHive.c)
 *     BiDoesHiveKeyExist @ 0x140A59FF0 (BiDoesHiveKeyExist.c)
 *     BiUnloadHiveByName @ 0x140A5A134 (BiUnloadHiveByName.c)
 */

__int64 __fastcall BiAddStoreFromFile(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // esi
  unsigned int v7; // r14d
  unsigned int Hive; // ebx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v13; // rcx
  int v14; // eax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h]
  wchar_t *v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  wchar_t Dst[12]; // [rsp+48h] [rbp-28h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v6 = 0;
  if ( (a2 & 0x20) != 0 )
  {
LABEL_19:
    BiLogMessage(4LL, L"Failed to find a key to load store %s. Last attempted key: %ws", a1 + 12, Dst);
    return (unsigned int)-1073741823;
  }
  v7 = 0;
  while ( 1 )
  {
    swprintf_s(Dst, 0xCuLL, L"BCD%08d", v7);
    Hive = BiLoadHive(Dst);
    if ( (Hive & 0x80000000) == 0 )
    {
      BiLogMessage(2LL, L"Loaded hive at BCD%08d", v7);
      if ( (a2 & 1) == 0 )
      {
LABEL_5:
        v9 = BiOpenKey(0LL, L"Description", 131103LL, &v21);
        v10 = v21;
        Hive = v9;
        if ( v9 < 0 )
        {
          v16 = 4LL;
          if ( v9 == -1073741772 )
          {
            BiLogMessage(4LL, L"A valid store must have a description key.");
            Hive = -1073741476;
          }
          LODWORD(v17) = Hive;
          BiLogMessage(
            v16,
            L"Failed to open description key for store. Store: %s StoreKey: %ws Status: %x",
            a1 + 12,
            Dst,
            v17,
            v19);
        }
        else
        {
          LODWORD(v19) = 24;
          v18 = Dst;
          v11 = BiSetRegistryValue(v21, L"KeyName", 0LL);
          Hive = v11;
          if ( v11 < 0 )
          {
            LODWORD(v18) = v11;
            BiLogMessage(
              4LL,
              L"Failed to set description key value. Store: %s StoreKey: %ws Status: %x",
              a1 + 12,
              Dst,
              v18,
              v19);
          }
          else
          {
            *a3 = 0LL;
          }
        }
        if ( v10 )
          BiCloseKey(v10);
        goto LABEL_10;
      }
      v14 = BiCreateKey(0LL, L"Objects", 131097LL, 0LL, &v20, 0LL);
      Hive = v14;
      if ( v14 >= 0 )
      {
        BiCloseKey(v20);
        v20 = 0LL;
        v14 = BiCreateKey(0LL, L"Description", 131097LL, 0LL, &v20, 0LL);
        Hive = v14;
        if ( v14 >= 0 )
          goto LABEL_5;
        v15 = L"Failed to initialize description key for store. Store: %s StoreKey: %ws Status: %x";
      }
      else
      {
        v15 = L"Failed to initialize objects key for store. Store: %s StoreKey: %ws Status: %x";
      }
      LODWORD(v17) = v14;
      BiLogMessage(4LL, v15, a1 + 12, Dst, v17);
LABEL_10:
      if ( v20 )
        BiCloseKey(v20);
      return Hive;
    }
    if ( Hive != -1073741790 )
      break;
    if ( (unsigned __int8)BiDoesHiveKeyExist(Dst) )
    {
      v6 = 0;
    }
    else if ( (unsigned int)++v6 >= 0xA )
    {
      BiLogMessage(4LL, L"Too many unexplained failures. File: %s Last status: %x", a1 + 12, 3221225506LL);
      return Hive;
    }
    if ( ++v7 > 0x5F5E0FF )
      goto LABEL_19;
  }
  v13 = 4LL;
  if ( Hive == -1073741809 )
    v13 = 2LL;
  BiLogMessage(v13, L"Failed to load hive into key %ws from %s. Status: %x", Dst, a1 + 12, Hive);
  return Hive;
}
