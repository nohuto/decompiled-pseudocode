/*
 * XREFs of WMI_QueryInstanceDeviceNodeInfo @ 0x1C003F6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 *     WMI_GetPropertyString @ 0x1C008BCF8 (WMI_GetPropertyString.c)
 */

__int64 __fastcall WMI_QueryInstanceDeviceNodeInfo(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // rbp
  unsigned int v5; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  KIRQL v11; // r13
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // r9
  __int64 *v17; // r10
  __int64 v18; // r11
  _DWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int16 v23; // cx
  __int64 v24; // rdx
  size_t v25; // rbp
  const void *v26; // rdx
  unsigned int v27; // eax
  size_t v28; // r8
  const void *v29; // rdx
  unsigned int v30; // eax
  __int64 v32; // [rsp+68h] [rbp+20h]

  v4 = a2;
  v5 = 0;
  *a4 = 1202;
  if ( a2 < 0x4B2 )
    return (unsigned int)-1073741789;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C006A0F8);
  v10 = *(_QWORD *)(v32 + 24);
  if ( !v10 )
  {
    *a4 = 0;
    return (unsigned int)-1073741667;
  }
  memset(a3, 0, v4);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 40));
  if ( (*(_DWORD *)(v10 + 1636) & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    if ( v12 )
    {
      v13 = *(unsigned int *)(v12 + 8);
      v14 = 11 * v13 + 1191;
      *a4 = v14;
      if ( v14 > (unsigned int)v4 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 40), v11);
        return (unsigned int)-1073741789;
      }
      *((_BYTE *)a3 + 148) = *(_BYTE *)(v12 + 37);
      *(_DWORD *)((char *)a3 + 1187) = v13;
      v15 = (_QWORD *)(*(_QWORD *)(v10 + 48) + 16LL);
      v16 = *v15 - 8LL;
      if ( v15 != (_QWORD *)*v15 )
      {
        do
        {
          if ( (_DWORD)v13 != *(_DWORD *)(v16 + 24) )
            break;
          if ( (_DWORD)v13 )
          {
            v17 = (__int64 *)(v16 + 72);
            v18 = v13;
            v19 = (_DWORD *)((char *)a3 + 1198);
            do
            {
              v20 = *v17;
              v17 += 9;
              *(_DWORD *)((char *)v19 - 7) = *(_DWORD *)v20;
              *(_WORD *)((char *)v19 - 3) = *(_WORD *)(v20 + 4);
              *((_BYTE *)v19 - 1) = *(_BYTE *)(v20 + 6);
              *v19 = 0;
              v19 = (_DWORD *)((char *)v19 + 11);
              --v18;
            }
            while ( v18 );
          }
          v21 = *(_QWORD *)(v16 + 8);
          v16 = v21 - 8;
        }
        while ( *(_QWORD *)(v10 + 48) + 16LL != v21 );
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 40), v11);
  *(_OWORD *)((char *)a3 + 130) = *(_OWORD *)(v10 + 1988);
  *((_WORD *)a3 + 73) = *(_WORD *)(v10 + 2004);
  *(_DWORD *)((char *)a3 + 149) = *(_DWORD *)(v10 + 172);
  *((_WORD *)a3 + 64) = *(_WORD *)(v32 + 48);
  *(_DWORD *)((char *)a3 + 155) = *(unsigned __int16 *)(v32 + 48);
  *(_DWORD *)((char *)a3 + 159) = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 1424LL);
  *a3 = 1431519822;
  a3[1] = *a4;
  a3[22] = 0;
  v22 = *(_QWORD *)(v32 + 16);
  *(_OWORD *)(a3 + 23) = *(_OWORD *)(v22 + 304);
  *(_OWORD *)(a3 + 27) = *(_OWORD *)(v22 + 320);
  v23 = *(_WORD *)(v32 + 48);
  v24 = *(unsigned __int8 *)(*(_QWORD *)(v32 + 16) + 240LL);
  if ( (_BYTE)v24 )
    *((_WORD *)a3 + v24 + 54) = v23;
  else
    *((_WORD *)a3 + 54) = v23;
  WMI_GetPropertyString(a1, 0LL, a3 + 2, 80LL);
  v25 = 256LL;
  WMI_GetPropertyString(a1, 1LL, (char *)a3 + 163, 256LL);
  WMI_GetPropertyString(a1, 2LL, (char *)a3 + 419, 256LL);
  v26 = *(const void **)(v10 + 2152);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v10 + 2148);
    v28 = 256LL;
    if ( v27 <= 0x100 )
      v28 = v27;
    memmove((char *)a3 + 675, v26, v28);
  }
  v29 = *(const void **)(v10 + 2168);
  if ( v29 )
  {
    v30 = *(_DWORD *)(v10 + 2164);
    if ( v30 <= 0x100 )
      v25 = v30;
    memmove((char *)a3 + 931, v29, v25);
  }
  return v5;
}
