/*
 * XREFs of BiDeleteElement @ 0x14082CDF8
 * Callers:
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x14082B2FC (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE004 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140A5BD48 (BiHandleFirmwareDefaultEntry.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1403902F4 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403D8C70 (_ultow_s.c)
 *     BiDeleteKey @ 0x14082CF64 (BiDeleteKey.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14082D76C (BiIsLinkedToFirmwareVariable.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BiDeleteElement(void *a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r15
  __int64 result; // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v15 = a2;
  LOBYTE(v4) = BiIsOfflineHandle((char)a1);
  v5 = v4;
  result = BiAcquireBcdSyncMutant(v4);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Deleting element %08x", a2);
    v14 = 0LL;
    v16 = 0LL;
    v7 = BiOpenKey(a1, L"Elements", 131097LL, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for all object's elements. Status: %x", (unsigned int)v7);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = BiOpenKey(v14, DstBuf, 0x10000LL, &v16);
      if ( v10 < 0 )
      {
        v13 = 4LL;
        if ( v10 == -1073741772 )
          v13 = 2LL;
        BiLogMessage(v13, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v10);
        v11 = v16;
        v8 = -1073741275;
      }
      else
      {
        v11 = v16;
        v12 = BiDeleteKey(v16);
        v8 = v12;
        if ( v12 < 0 )
          BiLogMessage(4LL, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v12);
        else
          v11 = 0LL;
      }
      if ( v11 )
        BiCloseKey(v11);
    }
    if ( v14 )
      BiCloseKey(v14);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v15) )
        BiSetFirmwareModifiedFromObject(a1);
    }
    LOBYTE(v9) = v5;
    BiReleaseBcdSyncMutant(v9);
    return (unsigned int)v8;
  }
  return result;
}
