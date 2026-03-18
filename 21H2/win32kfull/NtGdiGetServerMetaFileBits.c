/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x1C02B6FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C015F320 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015FA04 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C015FA64 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetServerMetaFileBits(
        __int64 a1,
        unsigned int a2,
        volatile void *a3,
        _DWORD *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  SIZE_T v9; // rsi
  unsigned int v11; // ebx
  int IsEnabled; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  _QWORD v26[6]; // [rsp+28h] [rbp-30h] BYREF

  v9 = a2;
  v11 = 0;
  IsEnabled = Feature_3101493560__private_IsEnabled();
  LOBYTE(v13) = 21;
  if ( IsEnabled )
  {
    v14 = HmgLock(a1, v13);
    HmgLockResult<META>::HmgLockResult<META>((__int64)v26, v14);
    if ( HmgLockResultBase<META>::operator bool(v26) )
    {
      v15 = *(_DWORD *)(v26[0] + 24LL);
      if ( v15 == 1599096397 || v15 == 1480934989 )
      {
        v11 = *(_DWORD *)(v26[0] + 40LL);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 == v11 )
          {
            v16 = (_DWORD *)a6;
            if ( a6 >= MmUserProbeAddress )
              v16 = (_DWORD *)MmUserProbeAddress;
            *v16 = *(_DWORD *)(v26[0] + 32LL);
            v17 = (_DWORD *)a7;
            if ( a7 >= MmUserProbeAddress )
              v17 = (_DWORD *)MmUserProbeAddress;
            *v17 = *(_DWORD *)(v26[0] + 36LL);
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (_DWORD *)MmUserProbeAddress;
            *a4 = *(_DWORD *)(v26[0] + 24LL);
            v18 = (_DWORD *)a5;
            if ( a5 >= MmUserProbeAddress )
              v18 = (_DWORD *)MmUserProbeAddress;
            *v18 = *(_DWORD *)(v26[0] + 28LL);
            ProbeForWrite(a3, v9, 4u);
            memmove((void *)a3, (const void *)(v26[0] + 44LL), *(unsigned int *)(v26[0] + 40LL));
          }
          else
          {
            v11 = 0;
          }
        }
      }
    }
    HmgLockResult<META>::~HmgLockResult<META>((__int64)v26);
  }
  else
  {
    v19 = HmgLock(a1, v13);
    v20 = v19;
    if ( v19 )
    {
      v21 = *(_DWORD *)(v19 + 24);
      if ( v21 == 1599096397 || v21 == 1480934989 )
      {
        v11 = *(_DWORD *)(v20 + 40);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 == v11 )
          {
            v22 = (_DWORD *)a6;
            if ( a6 >= MmUserProbeAddress )
              v22 = (_DWORD *)MmUserProbeAddress;
            *v22 = *(_DWORD *)(v20 + 32);
            v23 = (_DWORD *)a7;
            if ( a7 >= MmUserProbeAddress )
              v23 = (_DWORD *)MmUserProbeAddress;
            *v23 = *(_DWORD *)(v20 + 36);
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (_DWORD *)MmUserProbeAddress;
            *a4 = *(_DWORD *)(v20 + 24);
            v24 = (_DWORD *)a5;
            if ( a5 >= MmUserProbeAddress )
              v24 = (_DWORD *)MmUserProbeAddress;
            *v24 = *(_DWORD *)(v20 + 28);
            ProbeForWrite(a3, v9, 4u);
            memmove((void *)a3, (const void *)(v20 + 44), *(unsigned int *)(v20 + 40));
          }
          else
          {
            v11 = 0;
          }
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
    }
  }
  return v11;
}
