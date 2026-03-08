/*
 * XREFs of ACPIPccInitialize @ 0x1C00894D8
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00A9AC4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     AcpiTranslateAccessSize @ 0x1C007CB18 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitializeSubspace @ 0x1C0089A94 (AcpiPccInitializeSubspace.c)
 *     AcpiPccInterruptSupported @ 0x1C0089C9C (AcpiPccInterruptSupported.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int64 v1; // r8
  char *v2; // rdi
  unsigned __int64 v3; // r8
  unsigned int v4; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // edx
  __int64 v10; // r14
  __int64 i; // rbx
  char v12; // cl
  unsigned __int8 v13; // al
  char v14; // r10
  char v15; // r10
  __int64 v16; // r11
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // kr00_8
  unsigned __int64 v22; // rdx
  void *v23; // rcx
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r14
  signed __int32 v28[8]; // [rsp+0h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+10h]
  __int64 Pool2; // [rsp+70h] [rbp+18h]

  v1 = *(unsigned int *)(a1 + 4);
  v2 = (char *)(a1 + 48);
  PerformanceFrequency.QuadPart = 0LL;
  v3 = a1 + v1;
  v4 = 0;
  v6 = a1 + 48;
  if ( a1 + 50 <= v3 )
  {
    do
    {
      v7 = *(unsigned __int8 *)(v6 + 1);
      if ( (unsigned __int8)v7 < 2u )
        break;
      v6 += v7;
      if ( v6 > v3 )
        break;
      ++v4;
    }
    while ( v6 + 2 <= v3 );
    if ( v4 )
    {
      v8 = v4;
      Pool2 = ExAllocatePool2(64LL, 656LL * v4, 1299211073LL);
      v10 = Pool2;
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            21,
            11,
            (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids);
        }
        return 0LL;
      }
      KeQueryPerformanceCounter(&PerformanceFrequency);
      for ( i = v10 + 90; ; i += 656LL )
      {
        v12 = *v2;
        v13 = v2[1];
        if ( *v2 )
        {
          if ( v12 == 1 )
          {
            if ( v13 < 0x3Eu )
              goto LABEL_35;
            v14 = *v2;
          }
          else
          {
            if ( v12 != 2 || v13 < 0x5Au )
              goto LABEL_35;
            v14 = *v2;
          }
        }
        else
        {
          if ( v13 < 0x3Eu )
            goto LABEL_35;
          v14 = 0;
        }
        *(_BYTE *)(i - 90) = v14;
        *(_QWORD *)(i - 2) = *((_QWORD *)v2 + 3);
        *(_DWORD *)(i + 6) = *((_DWORD *)v2 + 8);
        *(_BYTE *)(i + 1) = AcpiTranslateAccessSize(*(_BYTE *)(i + 1), *(_BYTE *)(i - 1), *(_BYTE *)i);
        *(_QWORD *)(i - 18) = *(_QWORD *)(v2 + 36);
        *(_QWORD *)(i - 26) = *(_QWORD *)(v2 + 44);
        *(_DWORD *)(i + 22) = *((_DWORD *)v2 + 4);
        *(_QWORD *)(i + 14) = *((_QWORD *)v2 + 1);
        v17 = *((_DWORD *)v2 + 13);
        *(_DWORD *)(i - 82) = v17;
        if ( v17 < 0x1F4 )
          v17 = 500;
        *(_DWORD *)(i - 78) = v17;
        *(_DWORD *)(i - 74) = *((_DWORD *)v2 + 14) / 0x3Cu;
        v18 = *((unsigned __int16 *)v2 + 30);
        *(_DWORD *)(i - 70) = v18;
        v19 = v18;
        v21 = v18;
        v20 = v18 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart;
        v30 = *((_QWORD *)&v20 + 1);
        if ( is_mul_ok(v21, PerformanceFrequency.QuadPart) )
        {
          v22 = (unsigned __int64)v20 / 0xF4240;
        }
        else
        {
          *(_QWORD *)(i + 206) = -1LL;
          v22 = v19 * (PerformanceFrequency.QuadPart / 1000000);
        }
        *(_QWORD *)(i + 206) = v22;
        *(_DWORD *)(i - 86) ^= (*(_DWORD *)(i - 86) ^ *(_DWORD *)(a1 + 36)) & 1;
        if ( v15 != 1 )
        {
          if ( v15 == 2 )
          {
            *(_BYTE *)(i + 26) = v2[6];
            *(_QWORD *)(i + 110) = *(_QWORD *)(v2 + 62);
            *(_DWORD *)(i + 118) = *(_DWORD *)(v2 + 70);
            *(_QWORD *)(i + 126) = *(_QWORD *)(v2 + 74);
            *(_QWORD *)(i + 134) = *(_QWORD *)(v2 + 82);
LABEL_30:
            *(_DWORD *)(i + 94) = *(_DWORD *)(v2 + 2);
          }
          if ( (unsigned __int8)AcpiPccInterruptSupported(v16) )
            *(_DWORD *)(i - 78) += v24;
          if ( (int)AcpiPccInitializeSubspace(v23) >= 0 )
          {
            v25 = *(_QWORD *)(i - 50);
            *(_QWORD *)(i - 66) = v25 + 8;
            *(_DWORD *)(i - 58) = *(_DWORD *)(i + 22) - 8;
            *(_QWORD *)(i - 42) = v25 + 4;
            *(_QWORD *)(i - 34) = v25 + 6;
            *(_DWORD *)(i - 86) = *(_DWORD *)(i - 86) & 0xFFFFFFE1 | 4;
          }
          goto LABEL_35;
        }
        *(_BYTE *)(i + 26) = v2[6];
        if ( (v2[6] & 2) != 0 )
          goto LABEL_30;
LABEL_35:
        v2 += (unsigned __int8)v2[1];
        if ( !--v8 )
        {
          v26 = Pool2;
          _InterlockedOr(v28, 0);
          AcpiPccSubspaces = v26;
          AcpiPccSubspaceCount = v4;
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
