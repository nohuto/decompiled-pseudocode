/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1C00910B8
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1C000D040 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     AMLIGetNSObjectType @ 0x1C0002924 (AMLIGetNSObjectType.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, int *a2)
{
  int v2; // r15d
  unsigned int v3; // ebx
  char v6; // si
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // rcx
  const char *v10; // rax
  const char *v11; // rdx
  char *v12; // r12
  unsigned __int64 v13; // r11
  char i; // r10
  char *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rbp
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r9d
  unsigned int v27; // [rsp+90h] [rbp+8h] BYREF
  char *v28; // [rsp+98h] [rbp+10h] BYREF

  *a2 = -1;
  v2 = *(_DWORD *)(a1 + 196);
  v3 = 0;
  v28 = 0LL;
  v27 = 0;
  v6 = 1;
  if ( (int)ACPIGet((__int64 *)a1, 1413565791, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v28, (__int64)&v27) >= 0 )
  {
    v8 = v28;
  }
  else
  {
    v7 = *((_QWORD *)AcpiInformation + 4);
    if ( !v7 )
      return 3221225473LL;
    v8 = (char *)(v7 + 44);
    v6 = 0;
    v28 = (char *)(v7 + 44);
    v27 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v8 )
    return 3221225473LL;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = byte_1C00701BA;
  v11 = byte_1C00701BA;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(a1 + 568);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(a1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0xCu,
      (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
      v2,
      a1,
      v10,
      v11);
    v8 = v28;
  }
  v12 = v8 + 2;
  v13 = (unsigned __int64)&v8[v27];
  for ( i = 0; ; i = 1 )
  {
    v15 = v8;
    if ( (unsigned __int64)v12 <= v13 )
    {
      do
      {
        v16 = (unsigned __int8)v15[1];
        if ( (unsigned __int8)v16 < 2u )
          break;
        v17 = &v15[v16];
        if ( (unsigned __int64)&v15[v16] > v13 )
          break;
        v18 = *v15;
        if ( *v15 )
        {
          if ( v18 == 9 )
          {
            if ( (unsigned __int8)v16 >= 0x10u
              && ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 720)) == 6
               && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
               && *(_DWORD *)(v24 + 12) == v2
               || v6 && i) )
            {
              goto LABEL_43;
            }
          }
          else if ( v18 == 11
                 && (unsigned __int8)v16 >= 0x28u
                 && ((unsigned int)IrqLibGicVersion < 3 || (unsigned __int8)v16 >= 0x4Cu)
                 && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 720)) == 6
                   && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
                   || (unsigned int)AMLIGetNSObjectType(v25) == 12)
                  && *(_DWORD *)(v24 + 8) == v2
                  || v6 && i) )
          {
            if ( v26 < 3 )
LABEL_43:
              v21 = *(_DWORD *)(v24 + 4);
            else
              v21 = (*(_QWORD *)(v24 + 68) >> 8) & 0xFF000000 | *(_DWORD *)(v24 + 68) & 0xFFFFFF;
LABEL_22:
            *a2 = v21;
            break;
          }
        }
        else if ( (unsigned __int8)v16 >= 8u
               && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 720)) == 12
                 || (unsigned int)AMLIGetNSObjectType(v20) == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0)
                && *(unsigned __int8 *)(v19 + 2) == v2
                || v6 && i) )
        {
          v21 = *(unsigned __int8 *)(v19 + 3);
          goto LABEL_22;
        }
        v15 = v17;
      }
      while ( (unsigned __int64)(v17 + 2) <= v13 );
    }
    v22 = *a2;
    if ( *a2 != -1 )
      break;
    if ( !v6 )
      goto LABEL_26;
    if ( i )
      break;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v8, 0);
    v22 = *a2;
  }
LABEL_26:
  if ( v22 == -1 )
    return (unsigned int)-1073741823;
  return v3;
}
