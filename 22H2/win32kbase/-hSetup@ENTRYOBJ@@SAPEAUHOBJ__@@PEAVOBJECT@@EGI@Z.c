/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0045AA0
 * Callers:
 *     HmgAlloc @ 0x1C003DD30 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0044280 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  unsigned int v8; // esi
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r9
  unsigned int v12; // edx
  GdiHandleEntryTable *v13; // r9
  __int64 v14; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 v20; // cx
  unsigned __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rax
  signed __int32 v27[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v28; // [rsp+58h] [rbp+10h]

  v4 = a4;
  v6 = a3;
  v8 = a4;
  v9 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v10 = *(_QWORD *)(v9 + 8008);
  if ( v8 >= 0x10000 )
  {
    if ( *(_DWORD *)v10 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v10 + 16),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v8 = (unsigned __int16)v4;
    }
    else
    {
      v8 = (unsigned __int16)v4;
    }
  }
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v8 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
  {
    v14 = 0LL;
  }
  else
  {
    if ( v8 >= v12 )
    {
      v13 = *(GdiHandleEntryTable **)(v11 + 8LL * (((v8 - v12) >> 16) + 1) + 8);
      v8 += -65536 * ((v8 - v12) >> 16) - v12;
    }
    else
    {
      v13 = *(GdiHandleEntryTable **)(v11 + 8);
    }
    v14 = 0LL;
    if ( v8 < *((_DWORD *)v13 + 5) || GdiHandleEntryTable::GetEntryObject(v13, v8) )
      v14 = *(_QWORD *)v13 + 24LL * v8;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v16 = *ThreadWin32Thread) != 0 && (v6 & 0x10) == 0 )
    v17 = *(_QWORD *)(v16 + 72);
  else
    v17 = 0LL;
  v18 = *(_DWORD *)(v14 + 8) & 1;
  *(_BYTE *)(v14 + 14) = a2;
  *(_BYTE *)(v14 + 15) = 0;
  *(_QWORD *)(v14 + 16) = 0LL;
  if ( (v6 & 8) == 0 )
  {
    if ( v17 )
      v18 |= *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
    else
      v18 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v17 )
      CurrentThread = *(struct _KTHREAD **)v17;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = CurrentThread;
  }
  LOBYTE(v28) = a2;
  *((_WORD *)a1 + 6) = v6 & 1;
  *((_DWORD *)a1 + 2) = (v6 >> 1) & 1;
  HIBYTE(v28) = BYTE2(v4);
  v20 = v28;
  *(_WORD *)(v14 + 12) = v28;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_DWORD *)(v14 + 8) = v18;
  if ( (v6 & 0x40) != 0 )
  {
    v20 = v28 | 0x80;
    *(_WORD *)(v14 + 12) = v28 | 0x80;
  }
  if ( (v6 & 0x80u) != 0 )
    *(_BYTE *)(v14 + 15) |= 1u;
  *(_QWORD *)v14 = v4 | 0xFFFFFFFFFF000000uLL;
  v21 = (unsigned __int16)v4 | (unsigned __int64)(v20 << 16);
  *(_QWORD *)a1 = v21;
  _InterlockedOr(v27, 0);
  v22 = *(_QWORD *)(v9 + 8008);
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)v22 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v22 + 16),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v23 = *(_QWORD *)(v22 + 16);
  v24 = *(_DWORD *)(v23 + 2056);
  if ( v4 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
  {
    if ( v4 >= v24 )
    {
      v25 = *(_QWORD *)(v23 + 8LL * (((v4 - v24) >> 16) + 1) + 8);
      v4 += -65536 * ((v4 - v24) >> 16) - v24;
    }
    else
    {
      v25 = *(_QWORD *)(v23 + 8);
    }
    if ( v4 < *(_DWORD *)(v25 + 20) )
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) = a1;
  }
  return (struct HOBJ__ *)v21;
}
