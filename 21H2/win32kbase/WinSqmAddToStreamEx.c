/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C013A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000FA94 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WinSqmEventEnabled @ 0x1C0078A58 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0078AB0 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00B1428 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

void __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  struct _GUID *v7; // rdi
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  ULONGLONG v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  ULONG v18; // ecx
  __int64 v19; // r15
  ULONG v20; // ecx
  ULONGLONG v21; // rdx
  int v22; // eax
  ULONG v23; // ecx
  ULONG v24; // [rsp+20h] [rbp-91h] BYREF
  int v25; // [rsp+24h] [rbp-8Dh]
  int v26; // [rsp+28h] [rbp-89h]
  int v27; // [rsp+2Ch] [rbp-85h]
  ULONGLONG v28; // [rsp+30h] [rbp-81h]
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+40h] [rbp-71h] BYREF
  int v30; // [rsp+118h] [rbp+67h] BYREF
  unsigned int v31; // [rsp+120h] [rbp+6Fh] BYREF

  v31 = a3;
  v30 = a2;
  memset(UserData, 0, sizeof(UserData));
  v24 = 0;
  if ( !a4 )
  {
    v25 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1561);
  }
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v7 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v7 = (struct _GUID *)&unk_1C020EFC8;
      if ( a1 )
        v7 = a1;
    }
    if ( (unsigned int)WinSqmEventEnabled(&SQM_ADD_STREAMROW, v7) )
    {
      v8 = v31;
      v9 = 0;
      if ( v31 > 0x40 )
        v8 = 64;
      v31 = v8;
      if ( v8 )
      {
        LODWORD(v10) = v24;
        do
        {
          switch ( *(_DWORD *)(a4 + 16LL * v9 + 4) )
          {
            case 1:
              v11 = 19;
              break;
            case 2:
              v12 = -1LL;
              do
                ++v12;
              while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v9 + 8) + 2 * v12) );
              if ( (unsigned int)v12 > 0x80 )
                LODWORD(v12) = 128;
              v11 = 2 * v12 + 17;
              break;
            case 3:
              v11 = 23;
              break;
            default:
              return;
          }
          ++v9;
          v10 = (v11 & 0xFFFFFFF8) + (unsigned int)v10;
          v24 = v10;
        }
        while ( v9 < v8 );
      }
      else
      {
        v10 = v24;
      }
      if ( (unsigned int)v10 <= 0x4400
        || (v25 = 0x20000,
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1629),
            v10 = v24,
            v24 <= 0x4400) )
      {
        v13 = Win32AllocPool(v10, 0x6D715355u);
        v14 = v13;
        if ( v13 )
        {
          UserData[0].Ptr = (ULONGLONG)v7;
          v15 = v13;
          UserData[1].Ptr = (ULONGLONG)&v30;
          *(_QWORD *)&UserData[0].Size = 16LL;
          v16 = 0;
          UserData[2].Ptr = (ULONGLONG)&unk_1C0255868;
          *(_QWORD *)&UserData[1].Size = 4LL;
          UserData[3].Ptr = (ULONGLONG)&v31;
          UserData[4].Ptr = (ULONGLONG)&v24;
          *(_QWORD *)&UserData[2].Size = 4LL;
          *(_QWORD *)&UserData[3].Size = 4LL;
          for ( *(_QWORD *)&UserData[4].Size = 4LL; v16 < v31; v15 += v17 )
          {
            *(_DWORD *)v15 = *(_DWORD *)(a4 + 16LL * v16 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v16 + 4) )
            {
              case 1:
                v23 = v24;
                v17 = 16;
                if ( v15 + 16 > v14 + v24 )
                {
                  v27 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1679);
                  v23 = v24;
                }
                if ( v15 + 16 > v14 + v23 )
                  goto LABEL_53;
                *(_DWORD *)(v15 + 8) = *(_DWORD *)(a4 + 16LL * v16 + 8);
                break;
              case 2:
                v19 = -1LL;
                do
                  ++v19;
                while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v16 + 8) + 2 * v19) );
                v20 = v24;
                if ( (unsigned int)v19 > 0x80 )
                  LODWORD(v19) = 128;
                v17 = (2 * v19 + 17) & 0xFFFFFFF8;
                v21 = v15 + v17;
                v28 = v21;
                if ( v21 > v14 + v24 )
                {
                  v26 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1716);
                  v20 = v24;
                  v21 = v28;
                }
                if ( v21 > v14 + v20 )
                  goto LABEL_53;
                v22 = RtlStringCchCopyW(
                        (unsigned __int16 *)(v15 + 8),
                        (unsigned int)(v19 + 1),
                        *(size_t **)(a4 + 16LL * v16 + 8));
                if ( (int)(v22 + 0x80000000) >= 0 && v22 != -2147483643 )
                  goto LABEL_53;
                break;
              case 3:
                v17 = 16;
                v18 = v24;
                if ( v15 + 16 > v14 + v24 )
                {
                  v25 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1693);
                  v18 = v24;
                }
                if ( v15 + 16 > v14 + v18 )
                  goto LABEL_53;
                *(_QWORD *)(v15 + 8) = *(_QWORD *)(a4 + 16LL * v16 + 8);
                break;
              default:
                goto LABEL_53;
            }
            *(_DWORD *)(v15 + 4) = v17;
            ++v16;
          }
          UserData[5].Size = v24;
          UserData[5].Ptr = v14;
          UserData[6].Ptr = (ULONGLONG)&a5;
          UserData[5].Reserved = 0;
          *(_QWORD *)&UserData[6].Size = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
LABEL_53:
          Win32FreePool(v14);
        }
      }
    }
  }
}
