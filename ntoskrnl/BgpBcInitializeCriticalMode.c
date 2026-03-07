__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v3; // eax
  PCWSTR v4; // rbx
  unsigned __int16 *Message; // rax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  int ProgressMessages; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  _DWORD *v23; // rdi
  __int64 v24; // r14
  _DWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 Memory; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  int v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v33[2]; // [rsp+58h] [rbp-18h] BYREF
  __int128 v34; // [rsp+60h] [rbp-10h] BYREF
  PCWSTR v35; // [rsp+A0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR v37; // [rsp+B8h] [rbp+48h] BYREF

  v29 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v3 = *(_DWORD *)(a1 + 120);
  v32 = 0LL;
  v34 = 0LL;
  if ( (v3 & 0x400000) != 0 )
  {
    dword_140C0E3B0 |= 0x400000u;
  }
  else
  {
    if ( (v3 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v37 = 0LL;
    if ( a2 != -1 )
    {
      Message = BcpFindMessage(0xC1008001);
      RtlInitUnicodeString(&stru_140C70700, Message);
      v6 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString(&stru_140C70720, v6);
      v7 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString(&stru_140C70730, v7);
      v8 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString(&stru_140C70740, v8);
      v9 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString(&stru_140C70750, v9);
      v10 = BcpFindMessage(0xC1008003);
      RtlInitUnicodeString(&stru_140C70710, v10);
      v11 = BcpFindMessage(0x41008014u);
      RtlInitUnicodeString(&stru_140C707A0, v11);
      v12 = BcpFindMessage(0x41008015u);
      RtlInitUnicodeString(&stru_140C707B0, v12);
      v13 = BcpFindMessage(0x41008016u);
      RtlInitUnicodeString(&stru_140C707C0, v13);
      v14 = BcpFindMessage(0x41008018u);
      RtlInitUnicodeString(&stru_140C707D0, v14);
      v15 = BcpFindMessage(0x41008017u);
      RtlInitUnicodeString(&stru_140C707E0, v15);
      v16 = BcpFindMessage(0x41008019u);
      RtlInitUnicodeString(&stru_140C707F0, v16);
      v17 = BcpFindMessage(0x41008020u);
      RtlInitUnicodeString(&stru_140C70800, v17);
      v18 = BcpFindMessage(0x41008021u);
      RtlInitUnicodeString(&stru_140C70810, v18);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v35) >= 0 )
      {
        RtlInitUnicodeString(&stru_140C70760, SourceString);
        RtlInitUnicodeString(&stru_140C70770, v35);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v37, &v35);
        v4 = v37;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140C70780, v37);
          RtlInitUnicodeString(&stru_140C70790, v35);
          if ( *BcpFindMessage(0x41008006u) == 48 )
            dword_140C0E3B0 |= 0x20000u;
          v22 = *(_DWORD *)(a1 + 120) & 0x10000000;
          v33[1] = -1;
          v23 = dword_140C0B590;
          v33[0] = v22 != 0 ? -14389468 : -16761454;
LABEL_10:
          v24 = 0LL;
          v25 = v23;
          while ( (int)BgpFoDetermineFontInformation(
                         *v25,
                         v20,
                         v21,
                         (unsigned int)&v29,
                         (__int64)&v34 + 8,
                         (__int64)&v34) >= 0 )
          {
            ++v24;
            *v25++ = DWORD2(v34);
            if ( v24 >= 4 )
            {
              v23 += 18;
              if ( (__int64)v23 < (__int64)&qword_140C0B6F8 )
                goto LABEL_10;
              HIDWORD(v34) = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v33, &v32) >= 0 )
              {
                v26 = v32;
                Memory = BgpFwAllocateMemory(v32);
                if ( Memory )
                {
                  qword_140C0E2F0 = 0LL;
                  BcpWorkspace = Memory;
                  v30 = __PAIR64__(HIDWORD(v29), DWORD2(v32));
                  qword_140C0E2E8 = v26;
                  qword_140C70820 = BgpDisplayCharacterGetContext((__int64)v33, (int *)&v30, 3);
                  if ( qword_140C70820 )
                  {
                    dword_140C0E3B0 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        BgpFwFreeMemory((__int64)SourceString);
      if ( v4 )
        BgpFwFreeMemory((__int64)v4);
      if ( qword_140C70820 )
        BgpDisplayCharacterDestroyContext(qword_140C70820);
    }
  }
  return 0LL;
}
