/*
 * XREFs of ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C01077E0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002F530 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C006670C (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C0066884 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(
        const struct _NDIS_FILTER_DRIVER_CHARACTERISTICS *a1,
        const struct _GUID *a2)
{
  unsigned __int8 MajorNdisVersion; // r11
  const struct _GUID *v3; // rax
  int MinorNdisVersion; // ebx
  unsigned int Data3_low; // r10d
  struct _GUID *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r8
  USHORT Size; // dx
  int v11; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const struct _GUID *)&unk_1C00CB6F0;
  MinorNdisVersion = a1->MinorNdisVersion;
  Data3_low = 0;
  a2->Data1 = 0;
  v6 = (struct _GUID *)a2;
  v7 = MinorNdisVersion | (MajorNdisVersion << 16);
  while ( (_DWORD)v7 != v3->Data1 )
  {
    v3 = (const struct _GUID *)((char *)v3 + 8);
    a2 = &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids;
    if ( v3 == &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids )
      goto LABEL_6;
  }
  Data3_low = LOBYTE(v3->Data3);
LABEL_6:
  switch ( Data3_low )
  {
    case 1u:
      Size = a1->Header.Size;
      LODWORD(v8) = Size;
      if ( Size >= 0xE0u )
        LODWORD(v8) = 224;
      goto LABEL_12;
    case 2u:
      v8 = 224LL;
      break;
    case 3u:
      v8 = 240LL;
      break;
    default:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          v7,
          0x10u,
          v11,
          MajorNdisVersion,
          MinorNdisVersion,
          &a1->FriendlyName.Length);
      return 3221291012LL;
  }
  if ( a1->Header.Type == 0x8B && a1->Header.Size >= (unsigned int)v8 && a1->Header.Revision >= Data3_low )
  {
LABEL_12:
    v6->Data1 = v8;
    return 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, v8, 0x11u, v11);
  return 3221291013LL;
}
