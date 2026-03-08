/*
 * XREFs of ACPIDetectDuplicateHID @ 0x1C001A3CC
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0010780 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIExtListEnumNext @ 0x1C00263F4 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C00264F8 (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C0026554 (ACPIExtListTestElement.c)
 */

void __fastcall ACPIDetectDuplicateHID(_QWORD *BugCheckParameter2)
{
  __int64 v1; // rdx
  __int64 i; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  const char *v6; // rcx
  const char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int8 *v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  int v13; // ecx
  const char *v14; // rax
  const char *v15; // r8
  const char *v16; // rax
  const char *v17; // r8
  _QWORD v18[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql[16]; // [rsp+70h] [rbp+2Fh]
  __int64 v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+88h] [rbp+47h]
  int v23; // [rsp+8Ch] [rbp+4Bh]

  v23 = 0;
  v1 = BugCheckParameter2[99];
  *(_OWORD *)NewIrql = 0LL;
  if ( v1 && (BugCheckParameter2[1] & 0xA00000000000LL) != 0 && (BugCheckParameter2[1] & 0x2000000000003LL) == 0 )
  {
    v18[1] = 0LL;
    v18[0] = v1 + 800;
    v21 = 816LL;
    SpinLock = &AcpiDeviceTreeLock;
    v22 = 2;
    for ( i = ACPIExtListStartEnum(v18); ; i = ACPIExtListEnumNext(v18) )
    {
      LOBYTE(v4) = 1;
      v5 = (_QWORD *)i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v18, v4) )
        break;
      if ( !v5 )
      {
        if ( v22 == 2 )
          KeReleaseSpinLock(SpinLock, NewIrql[0]);
        return;
      }
      if ( v5 != BugCheckParameter2 && (v5[1] & 0xA00000000000LL) != 0 && (v5[1] & 0x2080000000003LL) == 0 )
      {
        v6 = (const char *)v5[76];
        if ( v6 )
        {
          v7 = (const char *)BugCheckParameter2[76];
          if ( v7 )
          {
            if ( strstr(v6, v7) )
            {
              v8 = v5[1];
              v9 = BugCheckParameter2[1];
              if ( (v8 & 0x1400000000000LL) != 0 && (v9 & 0x1400000000000LL) != 0 )
              {
                v10 = (unsigned __int8 *)v5[77];
                v11 = BugCheckParameter2[77] - (_QWORD)v10;
                do
                {
                  v12 = v10[v11];
                  v13 = *v10 - v12;
                  if ( v13 )
                    break;
                  ++v10;
                }
                while ( v12 );
                if ( !v13 )
                {
                  v14 = (const char *)&unk_1C00622D0;
                  v15 = (const char *)&unk_1C00622D0;
                  if ( (v9 & 0x200000000000LL) != 0 )
                  {
                    v14 = (const char *)BugCheckParameter2[76];
                    if ( (v9 & 0x400000000000LL) != 0 )
                      v15 = (const char *)BugCheckParameter2[77];
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_qqss(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      2u,
                      0x16u,
                      0xDu,
                      (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                      (char)v5,
                      (char)BugCheckParameter2,
                      v14,
                      v15);
                  KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                }
              }
              else if ( ((v9 | v8) & 0x1400000000000LL) == 0 )
              {
                v16 = (const char *)&unk_1C00622D0;
                v17 = (const char *)&unk_1C00622D0;
                if ( (v9 & 0x200000000000LL) != 0 )
                {
                  v16 = (const char *)BugCheckParameter2[76];
                  if ( (v9 & 0x400000000000LL) != 0 )
                    v17 = (const char *)BugCheckParameter2[77];
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xEu,
                    (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                    (char)v5,
                    (char)BugCheckParameter2,
                    v16,
                    v17);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
