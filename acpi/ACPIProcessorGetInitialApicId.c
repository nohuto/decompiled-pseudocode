__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  int v4; // r15d
  char v6; // r14
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v10; // rcx
  const char *v11; // rax
  const char *v12; // rdx
  char *v13; // r12
  unsigned __int64 v14; // rbp
  char i; // r10
  char *v16; // rdx
  __int64 v17; // rcx
  char *v18; // r11
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // [rsp+90h] [rbp+8h] BYREF
  char *v29; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v29 = 0LL;
  *a2 = -1;
  v4 = *(_DWORD *)(a1 + 196);
  v6 = 1;
  v28 = 0;
  if ( (int)ACPIGet(a1, 0x54414D5Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v29, (__int64)&v28) >= 0 )
  {
    v8 = v29;
  }
  else
  {
    v7 = *((_QWORD *)AcpiInformation + 4);
    if ( !v7 )
      return 3221225473LL;
    v8 = (char *)(v7 + 44);
    v6 = 0;
    v29 = (char *)(v7 + 44);
    v28 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
  }
  if ( !v8 )
    return 3221225473LL;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = byte_1C00622D0;
  v12 = byte_1C00622D0;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(a1 + 608);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0xCu,
      (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
      v4,
      a1,
      v11,
      v12);
    v8 = v29;
  }
  v13 = v8 + 2;
  v14 = (unsigned __int64)&v8[v28];
  for ( i = 0; ; i = 1 )
  {
    v16 = v8;
    if ( (unsigned __int64)v13 <= v14 )
    {
      do
      {
        v17 = (unsigned __int8)v16[1];
        if ( (unsigned __int8)v17 < 2u )
          break;
        v18 = &v16[v17];
        if ( (unsigned __int64)&v16[v17] > v14 )
          break;
        v19 = *v16;
        if ( *v16 )
        {
          if ( v19 == 9 )
          {
            if ( (unsigned __int8)v17 >= 0x10u
              && ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 760)) == 6
               && (v25 & *(_QWORD *)(a1 + 8)) != 0
               && *(_DWORD *)(v24 + 12) == v4
               || v6 && i) )
            {
              goto LABEL_32;
            }
          }
          else if ( v19 == 11
                 && (unsigned __int8)v17 >= 0x28u
                 && ((unsigned int)IrqLibGicVersion < 3 || (unsigned __int8)v17 >= 0x4Cu)
                 && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 760)) == 6
                   && _bittest64((const signed __int64 *)(a1 + 8), 0x24u)
                   || (unsigned int)AMLIGetNSObjectType(v26) == 12)
                  && *(_DWORD *)(v24 + 8) == v4
                  || v6 && i) )
          {
            if ( v27 < 3 )
LABEL_32:
              v23 = *(_DWORD *)(v24 + 4);
            else
              v23 = (*(_QWORD *)(v24 + 68) >> 8) & 0xFF000000 | *(_DWORD *)(v24 + 68) & 0xFFFFFF;
LABEL_33:
            *a2 = v23;
            break;
          }
        }
        else if ( (unsigned __int8)v17 >= 8u
               && (((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 760)) == 12
                 || (unsigned int)AMLIGetNSObjectType(v21) == 6 && (v22 & *(_QWORD *)(a1 + 8)) != 0)
                && *(unsigned __int8 *)(v20 + 2) == v4
                || v6 && i) )
        {
          v23 = *(unsigned __int8 *)(v20 + 3);
          goto LABEL_33;
        }
        v16 = v18;
      }
      while ( (unsigned __int64)(v18 + 2) <= v14 );
    }
    if ( !v6 )
      break;
    if ( *a2 != -1 || i )
    {
      ExFreePoolWithTag(v8, 0);
      break;
    }
  }
  if ( *a2 == -1 )
    return (unsigned int)-1073741823;
  return v2;
}
