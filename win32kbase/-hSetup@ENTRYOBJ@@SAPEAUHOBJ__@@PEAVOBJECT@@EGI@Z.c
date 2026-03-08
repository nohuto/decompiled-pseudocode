/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C00510C0
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001C690 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     HmgAlloc @ 0x1C0052E60 (HmgAlloc.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004B580 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, unsigned __int8 a2, unsigned __int16 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // edx
  GdiHandleEntryTable *v12; // r9
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int8 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // ebp
  unsigned int CurrentProcessId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rax
  signed __int32 v29[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v31; // [rsp+58h] [rbp+10h]

  v4 = a4;
  v6 = a3;
  v7 = a4;
  v8 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v9 = *(_QWORD *)(v8 + 8008);
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)v9 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v9 + 16),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v7 = (unsigned __int16)v4;
    }
    else
    {
      v7 = (unsigned __int16)v4;
    }
  }
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_DWORD *)(v10 + 2056);
  if ( v7 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
  {
    v13 = 0LL;
  }
  else
  {
    if ( v7 >= v11 )
    {
      v12 = *(GdiHandleEntryTable **)(v10 + 8LL * (((v7 - v11) >> 16) + 1) + 8);
      v7 += -65536 * ((v7 - v11) >> 16) - v11;
    }
    else
    {
      v12 = *(GdiHandleEntryTable **)(v10 + 8);
    }
    v13 = 0LL;
    if ( v7 < *((_DWORD *)v12 + 5) || GdiHandleEntryTable::GetEntryObject(v12, v7) )
      v13 = *(_QWORD *)v12 + 24LL * v7;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v15 = *ThreadWin32Thread) != 0 && (v6 & 0x10) == 0 )
    v16 = *(_QWORD *)(v15 + 72);
  else
    v16 = 0LL;
  v17 = a2;
  v18 = *(_DWORD *)(v13 + 8) & 1;
  *(_WORD *)(v13 + 14) = a2;
  *(_QWORD *)(v13 + 16) = 0LL;
  if ( (v6 & 8) == 0 )
  {
    v19 = v18;
    if ( v16 )
    {
      v18 |= *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
    }
    else
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v17 = a2;
      v18 = v19 | CurrentProcessId & 0xFFFFFFFC;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v16 )
      CurrentThread = *(struct _KTHREAD **)v16;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = CurrentThread;
  }
  *((_WORD *)a1 + 6) = v6 & 1;
  *((_DWORD *)a1 + 2) = (v6 >> 1) & 1;
  LOBYTE(v31) = v17;
  HIBYTE(v31) = BYTE2(v4);
  v22 = v31;
  *(_WORD *)(v13 + 12) = v31;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_DWORD *)(v13 + 8) = v18;
  if ( (v6 & 0x40) != 0 )
  {
    v22 = v31 | 0x80;
    *(_WORD *)(v13 + 12) = v31 | 0x80;
  }
  if ( (v6 & 0x80u) != 0 )
    *(_BYTE *)(v13 + 15) |= 1u;
  *(_QWORD *)v13 = v4 | 0xFFFFFFFFFF000000uLL;
  v23 = (unsigned __int16)v4 | (unsigned __int64)(v22 << 16);
  *(_QWORD *)a1 = v23;
  _InterlockedOr(v29, 0);
  v24 = *(_QWORD *)(v8 + 8008);
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)v24 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v24 + 16),
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
  v25 = *(_QWORD *)(v24 + 16);
  v26 = *(_DWORD *)(v25 + 2056);
  if ( v4 < v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
  {
    if ( v4 >= v26 )
    {
      v27 = *(_QWORD *)(v25 + 8LL * (((v4 - v26) >> 16) + 1) + 8);
      v4 += -65536 * ((v4 - v26) >> 16) - v26;
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 8);
    }
    if ( v4 < *(_DWORD *)(v27 + 20) )
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) = a1;
  }
  return (struct HOBJ__ *)v23;
}
