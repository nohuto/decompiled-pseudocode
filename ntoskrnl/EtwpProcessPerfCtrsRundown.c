void __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  _DWORD v7[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  _DWORD *v19; // [rsp+A0h] [rbp+37h] BYREF
  int v20; // [rsp+A8h] [rbp+3Fh]
  int v21; // [rsp+ACh] [rbp+43h]

  v7[3] = 0;
  v7[0] = *(_DWORD *)(a1 + 1088);
  v7[2] = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
  v7[1] = *(_DWORD *)(a1 + 1668);
  v13 = *(_QWORD *)(a1 + 1176);
  v8 = *(_QWORD *)(a1 + 1168);
  v14 = *(_QWORD *)(a1 + 1792) << 12;
  v9 = *(_QWORD *)(a1 + 1824) << 12;
  v16 = *(_QWORD *)(a1 + 1144);
  v11 = *(_QWORD *)(a1 + 1160);
  v17 = *(_QWORD *)(a1 + 1136);
  v12 = *(_QWORD *)(a1 + 1152);
  v15 = *(_QWORD *)(a1 + 1608) << 12;
  v4 = *(_QWORD *)(a1 + 1616);
  v21 = 0;
  v5 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a2 + 1096);
  v10 = v4 << 12;
  v18 = v15;
  v19 = v7;
  v20 = 104;
  EtwpLogKernelEvent((__int64)&v19, v6, v5, 1u, 0x321u, 0x401802u);
}
