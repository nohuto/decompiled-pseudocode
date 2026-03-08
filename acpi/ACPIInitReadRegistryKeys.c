/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1C00A8998
 * Callers:
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     OSCloseHandle @ 0x1C008DB38 (OSCloseHandle.c)
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 */

void ACPIInitReadRegistryKeys()
{
  void *v0; // rbx
  void *v1; // rsi
  int v2; // eax
  int v3; // edx
  unsigned int v4; // edi
  _BYTE *Pool2; // rax
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  char *v9; // rax
  __int64 v10; // rdi
  int v11; // edi
  unsigned int v12; // r14d
  _BYTE *v13; // rax
  unsigned int v14; // edi
  char *v15; // rax
  char *v16; // r14
  unsigned int v17; // edx
  char *v18; // rcx
  char v19; // al
  int v20; // [rsp+28h] [rbp-10h]
  int v21; // [rsp+28h] [rbp-10h]
  unsigned int v22; // [rsp+70h] [rbp+38h] BYREF
  int v23; // [rsp+78h] [rbp+40h] BYREF
  int v24; // [rsp+80h] [rbp+48h] BYREF
  void *v25; // [rsp+88h] [rbp+50h] BYREF

  v25 = 0LL;
  v0 = 0LL;
  v22 = 4;
  v24 = 0;
  v23 = 0;
  v1 = 0LL;
  if ( (int)OSReadRegValue("Attributes", 0LL, &v23, &v22) >= 0 )
    AcpiOverrideAttributes |= v23 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, (__int64)&v25);
  if ( v2 >= 0 )
  {
    v4 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, v4, 1399874369LL);
      v0 = Pool2;
      if ( !Pool2 )
        break;
      v22 = v4;
      v4 += 10;
      v6 = OSReadRegValue("Identifier", v25, Pool2, &v22);
      if ( v6 != -2147483643 )
      {
        if ( v6 >= 0 )
        {
          v9 = strstr((const char *)v0, "Stepping");
          if ( v9 )
            *(v9 - 1) = 0;
          v10 = -1LL;
          do
            ++v10;
          while ( *((_BYTE *)v0 + v10) );
          v11 = v10 + 1;
          v12 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v13 = (_BYTE *)ExAllocatePool2(256LL, v12, 1399874369LL);
            v1 = v13;
            if ( !v13 )
              break;
            v22 = v12;
            v12 += 10;
            v6 = OSReadRegValue("VendorIdentifier", v25, v13, &v22);
            if ( v6 != -2147483643 )
            {
              if ( v6 >= 0 )
              {
                v14 = v22 + 2 + v11;
                v15 = (char *)ExAllocatePool2(64LL, v14, 1399874369LL);
                v16 = v15;
                if ( v15 )
                {
                  RtlStringCchPrintfA(v15, v14, "%s - %s", (const char *)v1, (const char *)v0);
                  v17 = 0;
                  if ( v14 )
                  {
                    v18 = v16;
                    do
                    {
                      v19 = *v18;
                      if ( !*v18 )
                        break;
                      if ( v19 < 32 || v19 == 44 )
                        *v18 = 32;
                      ++v17;
                      ++v18;
                    }
                    while ( v17 < v14 );
                  }
                  *((_QWORD *)&AcpiProcessorString + 1) = v16;
                  WORD1(AcpiProcessorString) = v14;
                  LOWORD(AcpiProcessorString) = v14;
                  v22 = 4;
                  if ( (int)OSReadRegValue("ProcDevAsyncStart", 0LL, &v24, &v22) < 0
                    || (AcpiProcessorAsyncStart = 1, !v24) )
                  {
                    AcpiProcessorAsyncStart = 0;
                  }
                }
                goto LABEL_38;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_38;
              v8 = 18;
              goto LABEL_14;
            }
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 17;
LABEL_14:
          v21 = v6;
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v7,
            11,
            v8,
            (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
            v21);
        }
        break;
      }
    }
LABEL_38:
    if ( v25 )
      OSCloseHandle(v25);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = v2;
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      11,
      16,
      (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
      v20);
  }
}
