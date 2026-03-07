_UNKNOWN **__fastcall PopDiagTraceThermalZoneEnumeration(__int64 a1)
{
  _UNKNOWN **result; // rax
  void *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned int v6; // kr00_4
  unsigned int v7; // kr04_4
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // r9d
  unsigned int *v12; // r10
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  ULONG v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v28; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v29; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v30; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v31; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int16 v32; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A4h] [rbp-64h]
  unsigned int *v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  __int64 v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  __int64 v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  __int64 v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  _DWORD v45[10]; // [rsp+208h] [rbp+100h] BYREF
  _UNKNOWN *retaddr; // [rsp+260h] [rbp+158h] BYREF

  result = &retaddr;
  v28 = 0;
  LOWORD(v27) = 0;
  LOWORD(v26) = 0;
  v29 = 0;
  v30 = 0;
  if ( PopDiagHandleRegistered )
  {
    result = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
    v3 = result;
    if ( result )
    {
      v4 = *((_QWORD *)result[39] + 5);
      if ( v4 )
      {
        v5 = v4 + 128;
        v6 = *(_DWORD *)(a1 + 132);
        v32 = *(_WORD *)(v4 + 128) >> 1;
        v7 = *(_DWORD *)(a1 + 140);
        LOWORD(v26) = v32;
        v8 = v6 / 0xA;
        v9 = v7 / 0xA;
        v10 = *(_DWORD *)(a1 + 188) / 0xAu;
        v31 = *(_DWORD *)(a1 + 136) / 0xAu;
        v29 = v6 / 0xA;
        v28 = v7 / 0xA;
        v30 = v10;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          v11 = 0;
          UserData.Ptr = (ULONGLONG)&v26;
          v12 = v45;
          v34 = *(_QWORD *)(v5 + 8);
          v13 = 6;
          v36 = 0;
          v35 = 2 * v32;
          v38 = 4LL;
          v37 = &v29;
          v39 = a1 + 116;
          v41 = a1 + 120;
          v43 = a1 + 124;
          v40 = 4LL;
          v42 = 4LL;
          v44 = 4LL;
          do
          {
            v14 = v11++;
            *v12 = *(unsigned int *)((char *)v12 + a1 + 112 - (_QWORD)v45 + 36) / 0xA;
            ++v12;
            v15 = v13++;
            v15 *= 2LL;
            *(&UserData.Ptr + v15) = (ULONGLONG)&v45[v14];
            *((_QWORD *)&UserData.Size + v15) = 4LL;
          }
          while ( v11 < 0xA );
          v16 = *(unsigned __int16 *)(a1 + 1040);
          v17 = 2LL * v13;
          *(&UserData.Ptr + v17) = (ULONGLONG)&v28;
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          v18 = v13 + 1;
          v19 = v13 + 2;
          v18 *= 2LL;
          *(&UserData.Ptr + v18) = (ULONGLONG)&v30;
          *((_QWORD *)&UserData.Size + v18) = 4LL;
          v20 = 2LL * v19;
          *(&UserData.Ptr + v20) = a1 + 192;
          *((_QWORD *)&UserData.Size + v20) = 4LL;
          v21 = v19 + 1;
          v19 += 2;
          v21 *= 2LL;
          *(&UserData.Ptr + v21) = a1 + 136;
          *((_QWORD *)&UserData.Size + v21) = 4LL;
          v22 = 2LL * v19;
          *(&UserData.Ptr + v22) = a1 + 196;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          LOWORD(v27) = (unsigned __int16)v16 >> 1;
          v23 = v19 + 1;
          v19 += 2;
          v23 *= 2LL;
          *(&UserData.Ptr + v23) = (ULONGLONG)&v27;
          *((_QWORD *)&UserData.Size + v23) = 2LL;
          v24 = 2LL * v19;
          *(&UserData.Ptr + v24) = *(_QWORD *)(a1 + 1048);
          *(&UserData.Size + 2 * v24) = v16;
          *(&UserData.Reserved + 2 * v24) = 0;
          v25 = 2LL * (v19 + 1);
          *(&UserData.Ptr + v25) = a1 + 200;
          *((_QWORD *)&UserData.Size + v25) = 4LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
          v9 = v28;
          v8 = v29;
          v10 = v30;
        }
        PopSqmThermalZoneEnumeration(
          v5,
          a1 + 1040,
          v8,
          *(_DWORD *)(a1 + 116),
          *(_DWORD *)(a1 + 120),
          *(_DWORD *)(a1 + 124),
          *(_DWORD *)(a1 + 148) / 0xAu,
          *(_DWORD *)(a1 + 152) / 0xAu,
          v9,
          v10,
          v31,
          *(_DWORD *)(a1 + 200));
        *(_BYTE *)(a1 + 65) |= 0x10u;
      }
      return (_UNKNOWN **)ObfDereferenceObjectWithTag(v3, 0x67446F50u);
    }
  }
  return result;
}
