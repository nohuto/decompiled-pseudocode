/*
 * XREFs of BiUpdateBcdObject @ 0x140806888
 * Callers:
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x1403745C4 (BiMapEfiDeviceForSpaces.c)
 *     Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage @ 0x140412120 (Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage.c)
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiGetFilePathFromEfiPath @ 0x14080826C (BiGetFilePathFromEfiPath.c)
 *     BiGetDeviceFromEfiPath @ 0x1408083D4 (BiGetDeviceFromEfiPath.c)
 *     BiSaveFirmwareVariable @ 0x140A5D494 (BiSaveFirmwareVariable.c)
 *     BiAreBootEntriesEqual @ 0x140A5DA70 (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x140A5E03C (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x140A5EC3C (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  PVOID v4; // r12
  void *Pool2; // r13
  unsigned int *v6; // rsi
  int v7; // eax
  void *v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // r8d
  _WORD *v12; // r15
  __int64 v13; // rax
  SIZE_T v14; // rbx
  int ElementDataWithFlags; // eax
  int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r8
  int FilePathFromEfiPath; // eax
  __int64 v23; // r8
  int v24; // eax
  int v26; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  unsigned int *v29; // [rsp+40h] [rbp-20h] BYREF
  PVOID v30; // [rsp+48h] [rbp-18h] BYREF
  void *Source2; // [rsp+50h] [rbp-10h] BYREF
  void *v32; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)(a2 + 40);
  v35 = 0;
  v27 = 0;
  v4 = 0LL;
  P = 0LL;
  Pool2 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  v26 = 0;
  v32 = 0LL;
  v34 = 0;
  v29 = 0LL;
  v7 = BcdOpenObject(a1, a2 + 16, &v32);
  v8 = v32;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_37;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)BiGetRegistryValue(v32, L"FirmwareVariable", L"Description", 3LL, &Source2, &v26) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == v26 && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_8:
      v12 = (_WORD *)((char *)v2 + (unsigned int)v2[4]);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = (unsigned int)(2 * v13 + 2);
      ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)v8, 301989892, v11, 0, (__int64)&v34);
      if ( ElementDataWithFlags == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(258LL, v34, 1262764866LL);
        if ( !Pool2 )
        {
LABEL_17:
          BiDeleteElement(v8, 0x12000004u);
          BcdSetElementDataWithFlags(v8, 0x12000004u, v17, (__int64)v12, v14);
LABEL_18:
          v18 = (unsigned int)v2[5];
          if ( *(_DWORD *)((char *)v2 + v18 + 8) == 4 )
          {
            v19 = (char *)v2 + v18;
            if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12) < 0 )
            {
              v4 = P;
              v20 = a2;
            }
            else
            {
              BiDeleteElement(v8, 0x11000001u);
              v20 = a2;
              BiMapEfiDeviceForSpaces(a2, (const void **)&P, &v35);
              v4 = P;
              BcdSetElementDataWithFlags(v8, 0x11000001u, v21, (__int64)P, v35);
            }
            FilePathFromEfiPath = BiGetFilePathFromEfiPath(v19 + 12, &v30, &v27);
            v9 = 0;
            if ( FilePathFromEfiPath >= 0 )
            {
              BiDeleteElement(v8, 0x12000002u);
              BcdSetElementDataWithFlags(v8, 0x12000002u, v23, (__int64)v30, v27);
              v9 = 0;
            }
            if ( (unsigned int)Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage() )
            {
              v24 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &v29);
              v6 = v29;
              if ( v24 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v2, v29) )
              {
                BiLogMessage(2LL, L"Updating BootEntry: %d", (unsigned int)v2[2]);
                v9 = BiModifyBootEntry(v6);
                if ( v9 >= 0 )
                {
                  v9 = BiSaveFirmwareVariable(v8, v6, v6[1]);
                  if ( v9 >= 0 )
                  {
                    ExFreePoolWithTag(v2, 0x4B444342u);
                    v9 = 0;
                    *(_QWORD *)(v20 + 40) = v6;
                    v6 = 0LL;
                  }
                }
              }
            }
          }
          else
          {
            v9 = 0;
          }
          if ( v4 )
            ExFreePoolWithTag(v4, 0x4B444342u);
          if ( v30 )
            ExFreePoolWithTag(v30, 0x4B444342u);
          goto LABEL_35;
        }
        ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)v8, 301989892, v16, (_DWORD)Pool2, (__int64)&v34);
      }
      if ( ElementDataWithFlags >= 0 && Pool2 && v34 == (_DWORD)v14 && RtlCompareMemory(v12, Pool2, v14) == v14 )
        goto LABEL_18;
      goto LABEL_17;
    }
  }
  v9 = BiSaveFirmwareVariable(v8, v2, (unsigned int)v2[1]);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
    goto LABEL_8;
  }
LABEL_35:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_37:
  if ( v8 )
    BcdCloseObject(v8);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v9;
}
