__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1)
{
  unsigned int v1; // edi
  int v2; // ebp
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  __int64 v6; // rcx
  __int64 v7; // rax
  CInpPushLock *Lock; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DEVICEINFO *i; // r14
  __int64 v12; // r15
  __int64 v13; // r11
  __int64 v14; // rbp
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // r11
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  char *v29; // rax
  char *v30; // rax
  __int64 v32[7]; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = *a1 - 4;
  v33 = v2;
  v4 = v2;
  v5 = 0;
  UserEnterUserCritSec();
  v7 = SGDGetUserSessionState(v6);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v7 + 16840));
  CInpPushLock::LockShared(Lock);
  v10 = SGDGetUserSessionState(v9);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v10 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v12 = *((_QWORD *)i + 59);
      v13 = *(_QWORD *)(v12 + 16);
      if ( v2 )
      {
        if ( v4 < 0x450 )
        {
          v1 = -1073741789;
          break;
        }
        v14 = 276LL * v5;
        a1[v14 + 1] = *(_DWORD *)(v12 + 24);
        a1[v14 + 2] = *(_DWORD *)(v13 + 1352);
        v15 = a1[v14 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v12 + 392) != 0LL ? 2 : 0);
        a1[v14 + 3] = v15;
        v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(4 * BYTE1(*(_DWORD *)(v12 + 360)))) & 4;
        a1[v14 + 3] = v16;
        v17 = v16 & 0xFFFC03FF | (*(unsigned __int8 *)(v12 + 768) << 10);
        a1[v14 + 3] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(8 * (*(int *)(v12 + 360) >> 2))) & 8;
        a1[v14 + 3] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(16 * (*(int *)(v12 + 360) >> 3))) & 0x10;
        a1[v14 + 3] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(32 * (*(int *)(v12 + 360) >> 4))) & 0x20;
        a1[v14 + 3] = v20;
        v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v12 + 360) >> 5) << 6)) & 0x40;
        a1[v14 + 3] = v21;
        v22 = v21 ^ ((unsigned __int8)v21 ^ *(_DWORD *)(v12 + 360) & 0x80) & 0x80;
        a1[v14 + 3] = v22;
        v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v12 + 360) >> 9) << 8)) & 0x100;
        a1[v14 + 3] = v23;
        a1[v14 + 3] = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v12 + 360) >> 10) << 9)) & 0x200;
        a1[v14 + 4] = *(_DWORD *)(v13 + 2136);
        *(_OWORD *)&a1[v14 + 5] = *(_OWORD *)(v13 + 2120);
        *(_QWORD *)&a1[v14 + 9] = *(_QWORD *)(v13 + 1904);
        a1[v14 + 11] = *(_DWORD *)(v13 + 1916);
        a1[v14 + 16] = *(_DWORD *)(v13 + 1996);
        *(_QWORD *)&a1[v14 + 19] = *(_QWORD *)(v13 + 2112);
        *(_QWORD *)&a1[v14 + 17] = *(_QWORD *)(v13 + 2104);
        RtlStringCchCopyW((unsigned __int16 *)&a1[v14 + 85], 0x80uLL, (size_t *)(v13 + 1612));
        RtlStringCchCopyW((unsigned __int16 *)&a1[v14 + 149], 0x80uLL, (size_t *)(v24 + 1356));
        v26 = *(_QWORD *)(v25 + 1344);
        if ( v26 )
          v27 = ValidateHmonitorNoRip(v26);
        else
          v27 = 0LL;
        v28 = a1[v14 + 3];
        if ( v27 )
        {
          a1[v14 + 3] = v28 | 1;
          *(_OWORD *)&a1[v14 + 12] = *(_OWORD *)GetMonitorRect(v32, v27);
        }
        else
        {
          a1[v14 + 3] = v28 & 0xFFFFFFFE;
          *(_OWORD *)&a1[v14 + 12] = 0LL;
        }
        v29 = (char *)&a1[v14];
        if ( *(_QWORD *)(v12 + 376) )
          RtlStringCbCopyUnicodeString(v29 + 84, 0x100uLL, (const struct _UNICODE_STRING *)(v12 + 368));
        else
          *((_WORD *)v29 + 42) = 0;
        v30 = (char *)&a1[v14];
        if ( *(_QWORD *)(v12 + 376) )
          RtlStringCbCopyUnicodeString(v30 + 852, 0x100uLL, (const struct _UNICODE_STRING *)(v12 + 896));
        else
          *((_WORD *)v30 + 426) = 0;
        v2 = v33;
        v4 -= 1104;
      }
      ++v5;
    }
  }
  CInpPushLock::UnLockShared(Lock);
  *a1 = 1104 * v5 + 4;
  UserLeaveUserCritSec();
  return v1;
}
