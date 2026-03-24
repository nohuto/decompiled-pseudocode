/*
 * XREFs of RequestPendingCompletion @ 0x1C0005FE0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0005EC0 (NVMeHwMSIInterrupt.c)
 *     NVMeHwInterrupt @ 0x1C000ADE0 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C000A6A8 (IsInternalSrb.c)
 */

char __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdi
  unsigned __int16 *v5; // rdx
  __int16 v6; // cx
  bool v7; // zf
  bool v8; // si
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned __int16 v12; // bp
  __int16 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 SrbExtension; // r15
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  char v22; // [rsp+68h] [rbp+10h]

  v3 = *(unsigned __int16 *)(a1 + 290);
  if ( a2 == 0xFFFF )
  {
    v4 = a1 + 432;
    v5 = (unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 16LL * *(unsigned __int16 *)(a1 + 602));
    if ( (v5[7] & 1) == *(_WORD *)(a1 + 604) )
    {
      v10 = *(_QWORD *)(a1 + 784);
      v8 = 0;
      v11 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          v8 = 0;
          if ( v11 >= v3 )
            break;
          v4 = v10 + 344LL * v11;
          v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * *(unsigned __int16 *)(v4 + 170));
          if ( (v5[7] & 1) != *(_WORD *)(v4 + 172) )
            goto LABEL_15;
          ++v11;
        }
      }
      return v8;
    }
LABEL_15:
    v8 = 1;
    v22 = 1;
    goto LABEL_6;
  }
  if ( a2 <= (unsigned __int16)v3 )
  {
    if ( a2 )
      v4 = 344LL * a2 + *(_QWORD *)(a1 + 784) - 344LL;
    else
      v4 = a1 + 432;
    v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * *(unsigned __int16 *)(v4 + 170));
    v6 = v5[7] & 1;
    v7 = v6 == *(_WORD *)(v4 + 172);
    v8 = v6 != *(_WORD *)(v4 + 172);
    v22 = v8;
    if ( v7 )
      return v8;
LABEL_6:
    if ( (*(_DWORD *)(a1 + 108) & 2) != 0 )
    {
      v12 = *(_WORD *)(v4 + 170);
      v13 = *(_WORD *)(v4 + 172);
      if ( (v5[7] & 1) != v13 )
      {
        do
        {
          v14 = v5[5];
          v15 = v5[6];
          if ( *(_WORD *)(v4 + 168) && (*(_DWORD *)(a1 + 24) & 1) == 0 )
            break;
          if ( (_WORD)v14 )
          {
            v16 = *(_WORD *)(a1 + 286);
            v17 = (__int64 *)(136 * v14 + *(_QWORD *)(a1 + 776) - 104LL);
          }
          else
          {
            v16 = *(_WORD *)(a1 + 284);
            v17 = (__int64 *)(a1 + 328);
          }
          v18 = *v17;
          if ( !*(_QWORD *)(v18 + 16 * v15) || (unsigned __int8)IsInternalSrb(a1, *(_QWORD *)(v18 + 16 * v15)) )
            break;
          SrbExtension = GetSrbExtension(v19);
          if ( *(_QWORD *)(SrbExtension + 4160) )
          {
            v21 = 0LL;
            StorPortExtendedFunction(47LL, a1, 0LL, &v21);
            *(_QWORD *)(SrbExtension + 4176) = v21;
          }
          if ( v12 >= v16 - 1 )
          {
            v12 = 0;
            v13 = v13 != 1;
          }
          else
          {
            ++v12;
          }
          v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * v12);
        }
        while ( (v5[7] & 1) != v13 );
        return v22;
      }
    }
    return v8;
  }
  return 0;
}
