__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int128 *v5; // r10
  struct _KPROCESS *v6; // rbx
  int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // r11d
  __int64 v12; // r8
  char v13; // r12
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r13
  __int64 v17; // rbx
  int *v18; // rax
  __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int8 v21; // cl
  int v22; // r8d
  int v23; // r10d
  void (__fastcall *v24)(__int64, __int64, __int64 *, __int64); // rax
  struct _KPROCESS *SessionById; // rax
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // [rsp+40h] [rbp-99h] BYREF
  __int64 v30; // [rsp+48h] [rbp-91h] BYREF
  int v31; // [rsp+50h] [rbp-89h]
  int v32; // [rsp+54h] [rbp-85h]
  __int128 v33; // [rsp+58h] [rbp-81h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-39h] BYREF
  __int64 *v36; // [rsp+C0h] [rbp-19h]
  __int64 v37; // [rsp+C8h] [rbp-11h]
  __int64 *v38; // [rsp+D0h] [rbp-9h]
  __int64 v39; // [rsp+D8h] [rbp-1h]
  __int64 v40; // [rsp+E0h] [rbp+7h]
  __int64 v41; // [rsp+E8h] [rbp+Fh]

  v2 = *(_WORD *)(a1 + 98);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v33 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    v29 = v9;
    if ( *(_QWORD *)(a1 + 88) )
    {
      v10 = MEMORY[0xFFFFF78000000320];
      if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0 )
      {
        SessionById = (struct _KPROCESS *)MmGetSessionById(*(unsigned int *)(a1 + 56), v9);
        v6 = SessionById;
        if ( !SessionById )
          return (unsigned int)-1073741275;
        v7 = MmAttachSession(SessionById, &ApcState);
        if ( v7 < 0 )
        {
          ObfDereferenceObject(v6);
          return (unsigned int)v7;
        }
        v9 = v29;
        v5 = 0LL;
      }
      if ( *(_DWORD *)a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v19 = *(_QWORD *)(a1 + 32);
          v20 = v9;
          LOBYTE(v9) = *(_BYTE *)(a2 + 112);
          v21 = *(_BYTE *)(v19 + 90);
          v22 = *(_DWORD *)(v19 + 80);
          v23 = *(_DWORD *)(v19 + 84);
          LOWORD(v30) = *(_WORD *)(v19 + 88);
          v24 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64))(a1 + 88);
          WORD1(v30) = v21;
          HIDWORD(v30) = v22;
          v31 = v23;
          v32 = 0;
          v24(v19 + 40, v9, &v30, v20);
        }
        else
        {
          v11 = *(_DWORD *)(a2 + 72);
          v12 = *(unsigned int *)(a2 + 116);
          v30 = *(_QWORD *)(a1 + 88);
          v13 = v11 != 0 ? *(_BYTE *)(a2 + 76) : 0;
          v14 = *(_QWORD *)(a2 + 96) & -(__int64)(v11 != 0);
          v15 = 0;
          v16 = *(_QWORD *)(a2 + 88) & -(__int64)(v11 != 0);
          if ( (_DWORD)v12 )
          {
            v18 = (int *)(a2 + 132);
            while ( *v18 < 0 && *v18 != 0x80000000 )
            {
              ++v15;
              v18 += 4;
              if ( v15 >= (unsigned int)v12 )
                goto LABEL_10;
            }
            v26 = *(_DWORD *)(a2 + 16LL * v15 + 128);
            *(_QWORD *)&v33 = a2 + *(_QWORD *)(a2 + 16LL * v15 + 120);
            v5 = &v33;
            HIDWORD(v33) = *(_DWORD *)(a2 + 16LL * v15 + 132);
            DWORD2(v33) = v26;
          }
LABEL_10:
          LOBYTE(v12) = v13;
          ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int128 *, __int64))v30)(
            a2 + 56,
            v11,
            v12,
            v16,
            v14,
            v5,
            v29);
        }
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v6 )
      {
        MmDetachSession((__int64)v6, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        ObfDereferenceObject(v6);
      }
      v17 = MEMORY[0xFFFFF78000000320];
      if ( (v17 - v10) * KeQueryTimeIncrement() >= 600010000
        && (unsigned int)dword_140C06690 > 5
        && tlgKeywordOn((__int64)&dword_140C06690, 0x200000000800LL) )
      {
        v37 = 8LL;
        v30 = 2164260864LL;
        v39 = 8LL;
        v36 = &v30;
        v41 = 16LL;
        v38 = &v29;
        v28 = *(_QWORD *)(a1 + 32);
        v29 = v27 / 10000;
        v40 = v28 + 40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C06690,
          (unsigned __int8 *)byte_140035A4D,
          0LL,
          0LL,
          5u,
          &v35);
      }
    }
  }
  else if ( (v2 & 2) != 0 )
  {
    return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
  }
  return (unsigned int)v7;
}
