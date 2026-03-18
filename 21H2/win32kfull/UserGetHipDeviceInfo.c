/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01E92B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C016C26C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1)
{
  unsigned int v1; // edi
  int v2; // ebp
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *i; // r14
  __int64 v8; // r15
  __int64 v9; // r11
  __int64 v10; // rbp
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  char *v25; // rax
  char *v26; // rax
  char v28[56]; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = *a1 - 4;
  v29 = v2;
  v4 = v2;
  v5 = 0;
  UserEnterUserCritSec();
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v8 = *((_QWORD *)i + 59);
      v9 = *(_QWORD *)(v8 + 16);
      if ( v2 )
      {
        if ( v4 < 0x450 )
        {
          v1 = -1073741789;
          break;
        }
        v10 = 276LL * v5;
        a1[v10 + 1] = *(_DWORD *)(v8 + 24);
        a1[v10 + 2] = *(_DWORD *)(v9 + 1352);
        v11 = a1[v10 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v8 + 392) != 0LL ? 2 : 0);
        a1[v10 + 3] = v11;
        v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(4 * BYTE1(*(_DWORD *)(v8 + 360)))) & 4;
        a1[v10 + 3] = v12;
        v13 = v12 & 0xFFFC03FF | (*(unsigned __int8 *)(v8 + 768) << 10);
        a1[v10 + 3] = v13;
        v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(8 * (*(int *)(v8 + 360) >> 2))) & 8;
        a1[v10 + 3] = v14;
        v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(16 * (*(int *)(v8 + 360) >> 3))) & 0x10;
        a1[v10 + 3] = v15;
        v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(32 * (*(int *)(v8 + 360) >> 4))) & 0x20;
        a1[v10 + 3] = v16;
        v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v8 + 360) >> 5) << 6)) & 0x40;
        a1[v10 + 3] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ *(_DWORD *)(v8 + 360) & 0x80) & 0x80;
        a1[v10 + 3] = v18;
        v19 = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v8 + 360) >> 9) << 8)) & 0x100;
        a1[v10 + 3] = v19;
        a1[v10 + 3] = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v8 + 360) >> 10) << 9)) & 0x200;
        a1[v10 + 4] = *(_DWORD *)(v9 + 2136);
        *(_OWORD *)&a1[v10 + 5] = *(_OWORD *)(v9 + 2120);
        *(_QWORD *)&a1[v10 + 9] = *(_QWORD *)(v9 + 1904);
        a1[v10 + 11] = *(_DWORD *)(v9 + 1916);
        a1[v10 + 16] = *(_DWORD *)(v9 + 1996);
        *(_QWORD *)&a1[v10 + 19] = *(_QWORD *)(v9 + 2112);
        *(_QWORD *)&a1[v10 + 17] = *(_QWORD *)(v9 + 2104);
        RtlStringCchCopyW((char *)&a1[v10 + 85], 128LL, (char *)(v9 + 1612));
        RtlStringCchCopyW((char *)&a1[v10 + 149], 128LL, (char *)(v20 + 1356));
        v22 = *(_QWORD *)(v21 + 1344);
        if ( v22 )
          v23 = ValidateHmonitorNoRip(v22);
        else
          v23 = 0LL;
        v24 = a1[v10 + 3];
        if ( v23 )
        {
          a1[v10 + 3] = v24 | 1;
          *(_OWORD *)&a1[v10 + 12] = *(_OWORD *)GetMonitorRect((__int64)v28, v23);
        }
        else
        {
          a1[v10 + 3] = v24 & 0xFFFFFFFE;
          *(_OWORD *)&a1[v10 + 12] = 0LL;
        }
        v25 = (char *)&a1[v10];
        if ( *(_QWORD *)(v8 + 376) )
          RtlStringCbCopyUnicodeString(v25 + 84, 0x100uLL, (const struct _UNICODE_STRING *)(v8 + 368));
        else
          *((_WORD *)v25 + 42) = 0;
        v26 = (char *)&a1[v10];
        if ( *(_QWORD *)(v8 + 376) )
          RtlStringCbCopyUnicodeString(v26 + 852, 0x100uLL, (const struct _UNICODE_STRING *)(v8 + 896));
        else
          *((_WORD *)v26 + 426) = 0;
        v2 = v29;
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
