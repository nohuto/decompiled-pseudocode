__int64 __fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  char v5; // r15
  unsigned int v6; // ebx
  unsigned __int16 v7; // si
  __int64 v8; // rax
  _WORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rax
  __int16 v19; // cx
  unsigned __int16 *v20; // rax
  __int64 *v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  char v25; // cl
  _DWORD v26[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  char v35; // [rsp+A4h] [rbp-64h]
  char PagePriorityThread; // [rsp+A5h] [rbp-63h]
  char IoPriorityThread; // [rsp+A6h] [rbp-62h]
  char v38; // [rsp+A7h] [rbp-61h]
  __int64 v39; // [rsp+A8h] [rbp-60h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v41; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+C8h] [rbp-40h]
  __int64 *v43; // [rsp+D0h] [rbp-38h]
  __int64 v44; // [rsp+D8h] [rbp-30h]

  v3 = 2;
  v39 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_BYTE *)(a2 + 65);
  v6 = *(_DWORD *)(a2 + 40);
  v7 = 1284 - (*(_BYTE *)(a2 + 64) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v6 &= 0xFFFFE7FF;
  v26[0] = *(_DWORD *)(a1 + 1224);
  v26[1] = *(_DWORD *)(a1 + 1232);
  v27 = *(_QWORD *)(a1 + 56);
  v28 = *(_QWORD *)(a1 + 48);
  v8 = *(unsigned __int16 *)(a1 + 584);
  v9 = *(_WORD **)(a1 + 576);
  if ( (unsigned __int16)v8 >= *v9 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&v9[4 * v8 + 4];
  v31 = v10;
  v32 = *(_QWORD *)(a1 + 1312);
  v11 = *(_QWORD *)(a1 + 240);
  v29 = 0LL;
  v30 = 0LL;
  v33 = v11;
  v34 = 0;
  v35 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(v12);
  v38 = v13;
  v16 = 1;
  if ( (*(_BYTE *)(v14 + 1384) & 8) != 0 )
  {
    v25 = v38;
    if ( *(_QWORD *)(v14 + 1176) != v14 + 1176 )
      v25 = 1;
    v38 = v25;
  }
  if ( v15 && v5 )
  {
    v17 = *(_QWORD *)(v14 + 544);
    if ( *(_QWORD *)(v17 + 1408) == v13 )
      goto LABEL_9;
    v19 = *(_WORD *)(v17 + 2412);
    if ( v19 != 332 && v19 != 452 )
      v16 = v13;
    if ( !v16 )
    {
LABEL_9:
      v34 = *(_DWORD *)(v15 + 5920);
      v29 = *(_QWORD *)(v15 + 8);
      v18 = *(_QWORD *)(v15 + 16);
    }
    else
    {
      v34 = *(_DWORD *)(v15 + 12128);
      v29 = *(unsigned int *)(v15 + 8196);
      v18 = *(unsigned int *)(v15 + 8200);
    }
    v30 = v18;
  }
  v40[0] = v26;
  v40[1] = 72LL;
  v20 = *(unsigned __int16 **)(v14 + 1632);
  if ( v20 && (v22 = (__int64 *)*((_QWORD *)v20 + 1)) != 0LL )
  {
    v23 = *v20;
    v24 = 2048LL;
    if ( (unsigned __int16)v23 < 0x800u )
      v24 = v23;
    v41 = v22;
    v42 = __PAIR64__(v13, v24);
    if ( !(_DWORD)v24 || *((_WORD *)v22 + (v24 >> 1) - 1) != (_WORD)v13 )
    {
      v43 = &EtwpNull;
      v44 = 2LL;
      v3 = 3;
    }
  }
  else
  {
    v41 = &EtwpNull;
    v42 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(*(_QWORD *)(v4 + 1096), (__int64)v40, (_DWORD *)v14, *(_DWORD *)v4, v3, v7, v6, v13);
}
