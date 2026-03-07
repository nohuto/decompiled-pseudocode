__int64 __fastcall DrvDbGetDriverInfFileMappedPropertyKeys(
        __int64 a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *Handle)
{
  unsigned int *v6; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rsi
  int v10; // r12d
  unsigned int v11; // ebp
  int CompositeMappedPropertyKeys; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // r13
  __int64 (**v18)[3]; // r14
  unsigned int v19; // r12d
  const WCHAR *v20; // rdx
  int Value; // eax
  __int64 *v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ecx

  v6 = Handle;
  v8 = a5;
  Handle = 0LL;
  v9 = a4;
  *v6 = 0;
  v10 = a1;
  v11 = v8;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(a1, (_OWORD **)&off_140C09718, 1u, a4, v8, v6);
  if ( CompositeMappedPropertyKeys < 0 )
    return (unsigned int)CompositeMappedPropertyKeys;
  v15 = *v6;
  if ( (_DWORD)v15 )
  {
    if ( v14 )
      v9 = v14 + 20 * v15;
    if ( (unsigned int)v15 <= v8 )
      v11 = v8 - v15;
    else
      v11 = 0;
  }
  v16 = a3;
  if ( !a3 )
  {
    CompositeMappedPropertyKeys = DrvDbOpenDriverInfFileRegKey(v10, a2, v13, 0, (__int64)&Handle, 0LL);
    if ( CompositeMappedPropertyKeys < 0 )
      goto LABEL_25;
    v16 = Handle;
    a3 = Handle;
  }
  v17 = 0LL;
  v18 = &off_1400045A0;
  v19 = 0;
  while ( 1 )
  {
    v20 = (const WCHAR *)v18[2];
    LODWORD(a5) = 0;
    Value = RegRtlQueryValue(v16, v20, 0LL, 0LL, (unsigned int *)&a5);
    CompositeMappedPropertyKeys = Value;
    if ( Value != -1073741772 )
      break;
LABEL_20:
    v16 = a3;
    CompositeMappedPropertyKeys = 0;
    ++v19;
    v18 += 5;
    if ( v19 >= 4 )
      goto LABEL_21;
  }
  if ( !Value || Value == -1073741789 )
  {
    if ( v9 && (unsigned int)v17 < v11 )
    {
      v22 = (__int64 *)*v18;
      v23 = 5 * v17;
      v17 = (unsigned int)(v17 + 1);
      *(_OWORD *)(v9 + 4 * v23) = *(_OWORD *)*v18;
      *(_DWORD *)(v9 + 4 * v23 + 16) = *((_DWORD *)v22 + 4);
    }
    v24 = *v6 + 1;
    if ( v24 < *v6 )
    {
      *v6 = 0;
      CompositeMappedPropertyKeys = -1073741675;
      goto LABEL_25;
    }
    *v6 = v24;
    goto LABEL_20;
  }
LABEL_21:
  if ( CompositeMappedPropertyKeys >= 0 && v8 < *v6 )
    CompositeMappedPropertyKeys = -1073741789;
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CompositeMappedPropertyKeys;
}
