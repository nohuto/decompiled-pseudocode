__int64 __fastcall HalpIommuProcessDeviceEntries(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r12
  _BYTE *v4; // rsi
  int Memory; // ebx
  _BYTE *v6; // rbp
  unsigned __int64 v7; // r12
  _BYTE *v8; // r15
  char v9; // r14
  _BYTE *v10; // rdi
  __int64 v12; // r11
  _BYTE *v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int8 v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  ULONG v18; // edx
  char v19; // al
  ULONG v20; // r8d
  char v21; // dl
  ULONG v22; // ebp
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  _QWORD *v26; // rcx
  ULONG v27; // edx
  _BYTE *v29; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 2);
  v4 = (_BYTE *)(a2 + 40);
  Memory = 0;
  v6 = 0LL;
  v32 = 0LL;
  v7 = a2 + v3;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0;
  *a3 = 0;
  v10 = a3;
  v12 = a1;
  if ( a2 + 40 < v7 )
  {
    while ( 1 )
    {
      v13 = v4;
      v14 = v7 - (_QWORD)v4;
      if ( (_BYTE *)v7 == v4 )
        return (unsigned int)-1073741811;
      if ( (unsigned __int8)(*(_BYTE *)a2 - 16) <= 1u )
        break;
      v15 = *v4;
      if ( *v4 != 0xF0 )
      {
        if ( v15 > 0x7Fu )
          return (unsigned int)-1073741811;
LABEL_11:
        v16 = 1LL << ((v15 >> 6) + 2);
        goto LABEL_12;
      }
      if ( v14 < 0x16 )
        return (unsigned int)-1073741811;
      v6 = v4;
      LODWORD(v16) = (unsigned __int8)v4[21] + 22;
      v29 = v4;
LABEL_12:
      if ( (unsigned int)v16 > v14 )
        return (unsigned int)-1073741811;
      v4 += (unsigned int)v16;
      if ( v8 )
      {
        if ( v15 != 4 )
          return (unsigned int)-1073741811;
        v17 = *(unsigned __int16 *)(v13 + 1);
        v18 = *(unsigned __int16 *)(v8 + 1);
        if ( (unsigned __int16)v17 < (unsigned __int16)v18 )
          return (unsigned int)-1073741811;
        v19 = *v8;
        if ( *v8 == 3 )
          goto LABEL_21;
        if ( v19 == 67 )
        {
          v18 = *(unsigned __int16 *)(v8 + 5);
          v20 = 1;
        }
        else
        {
          if ( v19 != 71 )
          {
            Memory = -1073741811;
LABEL_23:
            v8 = 0LL;
            goto LABEL_49;
          }
LABEL_21:
          v20 = v17 - v18 + 1;
        }
        RtlSetBits((PRTL_BITMAP)(v12 + 184), v18, v20);
        v12 = a1;
        goto LABEL_23;
      }
      v21 = v9;
      v9 = 0;
      if ( v15 > 0x40u )
      {
        switch ( v15 )
        {
          case 0x42u:
            v27 = *(unsigned __int16 *)(v13 + 5);
            goto LABEL_48;
          case 0x43u:
            goto LABEL_46;
          case 0x46u:
            goto LABEL_45;
          case 0x47u:
LABEL_46:
            v8 = v13;
            goto LABEL_49;
          case 0xF0u:
            if ( v6[20] == 2 )
            {
              v22 = *(unsigned __int16 *)(v6 + 1);
              RtlSetBits((PRTL_BITMAP)(v12 + 184), v22, 1u);
              Memory = ExtEnvAllocateMemory(v23, 0x20u, &v32);
              if ( Memory < 0 )
                return (unsigned int)Memory;
              v25 = (_QWORD *)v32;
              *(_DWORD *)(v32 + 24) = v22;
              v6 = v29;
              Memory = ExtEnvAllocateMemory(v24, (unsigned int)(unsigned __int8)v29[21] + 1, v25 + 2);
              if ( Memory < 0 )
                return (unsigned int)Memory;
              memmove((void *)v25[2], v29 + 22, (unsigned __int8)v29[21]);
              v12 = a1;
              v26 = *(_QWORD **)(a1 + 232);
              if ( *v26 != a1 + 224 )
                __fastfail(3u);
              *v25 = a1 + 224;
              v25[1] = v26;
              *v26 = v25;
              *(_QWORD *)(a1 + 232) = v25;
              v10 = a3;
            }
            else
            {
              *v10 = 1;
            }
            goto LABEL_49;
        }
      }
      else
      {
        switch ( v15 )
        {
          case 0x40u:
          case 0u:
          case 1u:
            goto LABEL_49;
          case 2u:
LABEL_45:
            v27 = *(unsigned __int16 *)(v13 + 1);
LABEL_48:
            RtlSetBits((PRTL_BITMAP)(v12 + 184), v27, 1u);
            v12 = a1;
            goto LABEL_49;
          case 3u:
            goto LABEL_46;
          case 4u:
            if ( !v21 )
              return (unsigned int)-1073741811;
            goto LABEL_49;
        }
      }
      v9 = 1;
LABEL_49:
      if ( (unsigned __int64)v4 >= v7 )
      {
        if ( !v8 )
          return (unsigned int)Memory;
        return (unsigned int)-1073741811;
      }
    }
    if ( *v4 > 0x7Fu )
      return (unsigned int)-1073741811;
    v15 = *v4;
    goto LABEL_11;
  }
  return (unsigned int)Memory;
}
