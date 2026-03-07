__int64 __fastcall CmpBounceContextStart(__int64 a1, unsigned __int64 a2, size_t a3, int a4, char a5)
{
  unsigned __int64 v6; // rdi
  PVOID v8; // rax
  __int64 TransientPoolWithQuota; // rax
  unsigned int v11; // edx
  char v12; // cl
  char v13; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-48h]
  __int64 v18; // [rsp+78h] [rbp-40h]
  char *v19; // [rsp+80h] [rbp-38h]
  __int64 v20; // [rsp+88h] [rbp-30h]
  __int64 *v21; // [rsp+90h] [rbp-28h]
  __int64 v22; // [rsp+98h] [rbp-20h]

  *(_QWORD *)a1 = a2;
  v6 = a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !a4 && CmpIsBufferGloballyVisible(a2) )
  {
LABEL_10:
    *(_QWORD *)(a1 + 8) = v6;
    return 0LL;
  }
  if ( (unsigned int)dword_140C04328 > 5 && (byte_140C04338 & 4) != 0 && (qword_140C04340 & 4) == qword_140C04340 )
  {
    v14 = 1LL;
    v17 = &v14;
    v11 = a3;
    v13 = a5;
    v19 = &v13;
    v18 = 8LL;
    v20 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v12 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v12;
          v11 >>= 1;
        }
        while ( v11 );
      }
      v11 = 1 << (v12 + 1);
    }
    v15 = v11;
    v22 = 8LL;
    v21 = &v15;
    tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&byte_140036801, a3, 5u, &v16);
  }
  if ( a3 <= 0x40 )
  {
    v6 = a1 + 17;
    memset((void *)(a1 + 17), 0, a3);
    goto LABEL_10;
  }
  if ( a3 <= 0x1000 )
  {
    v8 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
    v6 = (unsigned __int64)v8;
    if ( v8 )
    {
      memset(v8, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_10;
    }
  }
  TransientPoolWithQuota = CmpAllocateTransientPoolWithQuota(a1, a3, 1111641411LL);
  if ( TransientPoolWithQuota )
  {
    *(_QWORD *)(a1 + 8) = TransientPoolWithQuota;
    return 0LL;
  }
  return 3221225626LL;
}
