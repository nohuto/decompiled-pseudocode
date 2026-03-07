__int64 MiAllocateVirtualMemoryPrepare(void *a1, unsigned __int64 a2, ...)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // rdi
  __int64 v5; // r11
  unsigned __int64 v6; // r14
  void *Process; // rax
  int v8; // ebp
  int v9; // r12d
  __int64 v10; // rdx
  int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // r11
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // r10d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r11
  __int64 v26; // rsi
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  int v29; // r8d
  unsigned int v30; // ecx
  char v31; // al
  PVOID v32; // rax
  _QWORD *v33; // rcx
  __int64 result; // rax
  __int64 UserReservationHighestAddress; // rax
  __int64 v36; // rax
  bool v37; // zf
  bool v38; // zf
  __int64 v39; // rax
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  PVOID v41; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+50h] [rbp-58h]
  unsigned __int64 v43; // [rsp+58h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp+10h]
  __int64 v45; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  __int64 v47; // [rsp+C8h] [rbp+20h]
  __int64 v48; // [rsp+D0h] [rbp+28h]
  __int64 v49; // [rsp+D8h] [rbp+30h]
  __int64 v50; // [rsp+E0h] [rbp+38h]
  __int64 v51; // [rsp+E8h] [rbp+40h]
  __int64 v52; // [rsp+F0h] [rbp+48h]
  __int64 v53; // [rsp+F8h] [rbp+50h]
  __int64 v54; // [rsp+100h] [rbp+58h]
  __int64 v55; // [rsp+108h] [rbp+60h]
  _QWORD *v56; // [rsp+110h] [rbp+68h]
  va_list va1; // [rsp+118h] [rbp+70h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v45 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, _QWORD);
  v52 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _QWORD);
  v54 = va_arg(va1, _QWORD);
  v55 = va_arg(va1, _QWORD);
  v56 = va_arg(va1, _QWORD *);
  v2 = v55;
  v3 = 0;
  v4 = v50;
  v5 = v47;
  Object = 0LL;
  v6 = a2;
  v43 = a2;
  v42 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v41 = Process;
  *(_QWORD *)(v55 + 96) = Process;
  if ( a1 != (void *)-1LL )
  {
    v14 = ObReferenceObjectByHandleWithTag(a1, 8u, (POBJECT_TYPE)PsProcessType, v51, 0x6D566D4Du, &Object, 0LL);
    if ( v14 < 0 )
      goto LABEL_84;
    Process = Object;
    v5 = v47;
    v41 = Object;
  }
  v8 = v48;
  v9 = v49 & 0xFFF807FF;
  v10 = (unsigned int)v52;
  v11 = v49 & 0x7F800;
  v12 = (unsigned int)v49 & 0xFFF807FF;
  v44 = v49 & 0x7F800;
  v13 = (unsigned int)v48;
  *(_QWORD *)(v2 + 88) = Process;
  *(_QWORD *)(v2 + 32) = v5;
  v14 = MiValidateAllocationType(v13, v10, v12);
  if ( v14 >= 0 )
  {
    if ( !v11 || (v14 = xHalUnmaskInterrupt(), v14 >= 0) )
    {
      if ( (v8 & 0x1000) != 0 && !v6 )
        v8 |= 0x2000u;
      if ( *(_QWORD *)(v4 + 24)
        && (v8 & 0x20400000) != 0x20000000
        && ((v8 & 0x20400000) != 0x20400000 || (*(_BYTE *)(v4 + 56) & 2) == 0) )
      {
        goto LABEL_83;
      }
      v16 = *(_QWORD *)(v4 + 56);
      if ( (v16 & 0xFFFFFFFFFFFFFFA0uLL) != 0 )
        goto LABEL_83;
      if ( (v9 & 0xF0) != 0 )
        *(_DWORD *)(v2 + 60) |= 8u;
      if ( (v9 & 0x40000000) != 0 )
      {
        if ( (v9 & 0xF0) == 0 )
          goto LABEL_83;
        v3 = 2;
        v9 &= ~0x40000000u;
        v42 = 2LL;
      }
      if ( (v16 & 0x40) != 0 )
      {
        if ( (v9 & 0xF0) == 0 )
          goto LABEL_83;
        v42 = v3 | 8u;
      }
      v17 = 0x10000LL;
      v18 = v8 & 0x20400000;
      v19 = 0x200000LL;
      if ( (v8 & 0x20400000) == 0x20000000 )
        v17 = 0x200000LL;
      v20 = v16 & 0x1A;
      LODWORD(v55) = v20;
      if ( (v16 & 0x1A) != 0 )
      {
        if ( ((v20 - 1) & v20) != 0 )
          goto LABEL_83;
        if ( (v20 & 2) != 0 )
        {
          v37 = v18 == 541065216;
        }
        else
        {
          if ( (v20 & 0x10) != 0 )
          {
            if ( !(unsigned int)MiHugePagesSupported() )
            {
              v14 = -1073741637;
              goto LABEL_84;
            }
            v17 = 0x40000000LL;
          }
          else if ( (v20 & 8) != 0 )
          {
            v17 = 0x200000LL;
          }
          v37 = v18 == 0x20000000;
        }
        if ( v37 )
          goto LABEL_18;
        if ( v18 != 0x400000 )
          goto LABEL_83;
      }
      else
      {
        if ( (v16 & 4) != 0 )
          goto LABEL_83;
        if ( v18 != 0x400000 )
        {
LABEL_18:
          if ( ((v8 & 0x2000) == 0 || v6) && (*(_QWORD *)v4 || *(_QWORD *)(v4 + 8) || *(_QWORD *)(v4 + 16)) )
            goto LABEL_83;
          if ( v45 )
          {
            v14 = MiValidateZeroBits((__int64 *)va, v19);
            if ( v14 < 0 )
              goto LABEL_84;
            if ( (v8 & 0x2000) != 0 && !v6 )
              *(_QWORD *)(v4 + 8) = MiGetUserReservationHighestAddress(v41, v45);
            v15 = v47;
            v18 = v8 & 0x20400000;
            v20 = v55;
          }
          if ( (v8 & 0x40000) != 0 )
          {
            *(_DWORD *)(v2 + 64) |= 0x8000000u;
            if ( (v8 & 0x4000) == 0 )
              goto LABEL_25;
          }
          else
          {
            if ( (v8 & 0x4000) == 0 )
            {
LABEL_25:
              if ( (v8 & 0x2000) == 0 )
              {
LABEL_26:
                v17 = 4096LL;
                goto LABEL_27;
              }
              if ( (v8 & 0x40000000) != 0 )
              {
                if ( ((v18 - 0x20000000) & 0xFFBFFFFF) == 0 )
                  goto LABEL_83;
                goto LABEL_26;
              }
LABEL_27:
              v21 = *(_QWORD *)(v4 + 16);
              if ( v21 )
              {
                if ( v21 < v17
                  || ((v21 - 1) & v21) != 0
                  || v21 >= 0x7FFFFFFF0000LL
                  || (v8 & 0x40000000) != 0 && v21 != 4096 )
                {
                  goto LABEL_83;
                }
              }
              else
              {
                *(_QWORD *)(v4 + 16) = v17;
              }
              if ( !v15
                || (v8 & 0x2000) != 0
                && ((v18 - 0x20000000) & 0xFFBFFFFF) == 0
                && (v18 != 541065216 && (v8 & 0x1000) == 0 && !v20 || ((v17 - 1) & v15) != 0) )
              {
                goto LABEL_83;
              }
              v22 = v6 + v15;
              if ( v22 - 1 < v6 || v22 - 1 > 0x7FFFFFFEFFFFLL )
                goto LABEL_83;
              if ( (v8 & 0x2000) == 0 )
              {
                if ( v8 != 0x80000 && v8 != 0x1000000 )
                {
                  v23 = ~(v17 - 1);
                  v6 &= v23;
                  v22 = v23 & (v17 + v22 - 1);
                  goto LABEL_37;
                }
                v36 = ~(v17 - 1);
                v6 = v36 & (v17 + v6 - 1);
                v22 &= v36;
                if ( v6 >= v22 )
                {
                  v14 = -1073741800;
                  goto LABEL_84;
                }
LABEL_37:
                v24 = v43;
                v25 = v22 - v6;
                if ( v43 )
                  *(_QWORD *)v4 = v6;
                v26 = *(_QWORD *)(v4 + 16);
                v27 = *(_QWORD *)v4;
                if ( ((v26 - 1) & *(_QWORD *)v4) == 0 )
                {
                  v28 = *(_QWORD *)(v4 + 8);
                  if ( v28 )
                  {
                    if ( v28 <= 0x7FFFFFFEFFFFLL && (((_WORD)v28 + 1) & 0xFFF) == 0 )
                      goto LABEL_44;
                  }
                  else
                  {
                    if ( (v8 & 0x2000) != 0 && !v24 && (v8 & 0x4000) == 0 )
                    {
                      UserReservationHighestAddress = MiGetUserReservationHighestAddress(v41, 0LL);
                      v29 = v55;
                      v28 = UserReservationHighestAddress;
                      *(_QWORD *)(v4 + 8) = UserReservationHighestAddress;
                      if ( v29 && (v29 & 2) == 0 )
                      {
                        if ( (v29 & 8) != 0 )
                        {
                          v39 = -2097152LL;
LABEL_136:
                          v28 = (v39 & v28) - 1;
                          *(_QWORD *)(v4 + 8) = v28;
                          goto LABEL_45;
                        }
                        if ( (v29 & 0x10) != 0 )
                        {
                          v39 = -1073741824LL;
                          goto LABEL_136;
                        }
                      }
LABEL_45:
                      if ( v27 < v28 && v28 - v27 + 1 >= v25 && (v8 & 0x7F) == 0 )
                      {
                        v30 = *(_DWORD *)(v4 + 32);
                        if ( v30 <= (unsigned __int16)KeNumberNodes )
                        {
                          v31 = *(_BYTE *)(v4 + 49);
                          if ( !v31 || v29 || (v8 & 0x20400000) == 0x20000000 )
                          {
                            *(_BYTE *)(v2 + 56) = v31;
                            *(_BYTE *)(v2 + 57) = v51;
                            *(_DWORD *)(v2 + 64) |= v52;
                            *(_DWORD *)(v2 + 68) = v53;
                            *(_QWORD *)(v2 + 72) = v54;
                            *(_QWORD *)(v2 + 104) = *(_QWORD *)(v4 + 40);
                            *(_QWORD *)(v2 + 112) = *(_QWORD *)(v4 + 56);
                            *(_DWORD *)(v2 + 120) = v42;
                            v32 = Object;
                            *(_DWORD *)(v2 + 52) = v30;
                            v33 = v56;
                            *(_QWORD *)(v2 + 8) = v28;
                            *(_QWORD *)v2 = v27;
                            *v33 = v32;
                            result = 0LL;
                            *(_QWORD *)(v2 + 16) = v26;
                            *(_QWORD *)(v2 + 24) = v25;
                            *(_DWORD *)(v2 + 40) = v8 & 0xFFFBBFFF;
                            *(_DWORD *)(v2 + 44) = v9;
                            *(_DWORD *)(v2 + 48) = v44;
                            return result;
                          }
                        }
                      }
                      goto LABEL_83;
                    }
                    if ( v27 + v25 >= v27 )
                    {
                      v28 = v27 + v25 - 1;
                      *(_QWORD *)(v4 + 8) = v28;
                      if ( v28 <= 0x7FFFFFFEFFFFLL )
                      {
LABEL_44:
                        v29 = v55;
                        goto LABEL_45;
                      }
                    }
                  }
                }
LABEL_83:
                v14 = -1073741811;
                goto LABEL_84;
              }
              if ( (v8 & 0x40000000) != 0 )
              {
                v38 = (((unsigned __int16)v6 | (unsigned __int16)v47) & 0xFFF) == 0;
              }
              else
              {
                if ( (v8 & 0x4000) == 0 )
                {
                  v6 &= -(__int64)v17;
                  if ( ((v18 - 0x20000000) & 0xFFBFFFFF) != 0 )
                    v22 = (v22 + 4095) & 0xFFFFFFFFFFFFF000uLL;
                  else
                    v22 = v6 + v47;
                  goto LABEL_37;
                }
                v38 = ((v47 | v6) & (v17 - 1)) == 0;
              }
              if ( !v38 )
                goto LABEL_83;
              goto LABEL_37;
            }
            if ( *(_QWORD *)v4 || *(_QWORD *)(v4 + 8) || *(_QWORD *)(v4 + 16) )
              goto LABEL_83;
            *(_DWORD *)(v2 + 64) |= 0x4000000u;
          }
          if ( !v20 && v18 != 0x20000000 )
            goto LABEL_26;
          goto LABEL_27;
        }
      }
      if ( (v16 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        goto LABEL_83;
      goto LABEL_18;
    }
  }
LABEL_84:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v14;
}
