__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  _OWORD *v6; // r14
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // r10
  __int64 v11; // rsi
  int v12; // r12d
  __int64 v14; // rcx
  unsigned int v15; // [rsp+34h] [rbp-74h] BYREF
  int v16; // [rsp+38h] [rbp-70h]
  int v17; // [rsp+3Ch] [rbp-6Ch]
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-40h]
  struct _KTHREAD *v23; // [rsp+70h] [rbp-38h]

  v6 = a4;
  v15 = 0;
  *a4 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_OWORD *)(a5 + 48) = 0LL;
  if ( !a3 )
    return 0LL;
  v21 = a5 + 16;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->PreviousMode )
    {
      if ( (a3 & 7) != 0 )
        goto LABEL_18;
    }
  }
  if ( *(_DWORD *)a3 != 48 )
  {
    v12 = -1073741811;
    v16 = -1073741811;
    goto LABEL_33;
  }
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
  v8 = *(_DWORD *)(a3 + 24);
  v17 = v8;
  if ( a2 )
  {
    v8 &= ~0x200u;
    v17 = v8;
  }
  if ( (v8 & 0xFFFEE00D) != 0 )
  {
    v12 = -1073741811;
    v16 = -1073741811;
    goto LABEL_33;
  }
  *(_DWORD *)a5 = v8;
  v9 = *(_QWORD *)(a3 + 16);
  v19 = v9;
  v10 = *(_QWORD *)(a3 + 32);
  v20 = v10;
  v11 = *(_QWORD *)(a3 + 40);
  v18 = v11;
  if ( v11 )
  {
    if ( !a1 )
    {
LABEL_14:
      *(_QWORD *)(a5 + 48) = *(_QWORD *)v11;
      *(_DWORD *)(a5 + 56) = *(_DWORD *)(v11 + 8);
      goto LABEL_19;
    }
    v23 = KeGetCurrentThread();
    if ( !v23->PreviousMode || (v18 & 3) == 0 )
    {
      v11 = v18;
      v10 = v20;
      v9 = v19;
      goto LABEL_14;
    }
LABEL_18:
    ExRaiseDatatypeMisalignment();
  }
LABEL_19:
  if ( v10 )
  {
    LOBYTE(a4) = 1;
    v12 = SeCaptureSecurityDescriptor(v10, a1, 1, (_DWORD)a4, a5 + 32);
    if ( v12 < 0 )
    {
      *(_QWORD *)(a5 + 32) = 0LL;
      goto LABEL_33;
    }
    SeComputeQuotaInformationSize(*(_QWORD *)(a5 + 32), &v15);
    *(_DWORD *)(a5 + 28) = v15;
  }
  if ( !v11 )
    goto LABEL_21;
  *(_DWORD *)(a5 + 48) = 12;
  *(_QWORD *)(a5 + 40) = a5 + 48;
  if ( *(_BYTE *)(a5 + 56) >= 2u )
  {
    v12 = -1073741811;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a5 + 52) > 3u )
  {
    v12 = -1073741659;
  }
  else
  {
LABEL_21:
    if ( v9 )
    {
      v12 = ObpCaptureObjectName(a1, v9, v6, a6);
      if ( v12 >= 0 )
        return 0LL;
    }
    else
    {
      if ( !*(_QWORD *)(a5 + 8) )
        return 0LL;
      v12 = -1073741773;
    }
  }
LABEL_33:
  v14 = *(_QWORD *)(a5 + 32);
  if ( v14 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSecurityDescriptor(v14, *(unsigned __int8 *)(a5 + 16), a3, a4);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v12;
}
