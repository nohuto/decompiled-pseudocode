/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00A7E48
 * Callers:
 *     CoreUICallSendVaList @ 0x1C00A7D20 (CoreUICallSendVaList.c)
 * Callees:
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C00A8518 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0241F9C (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::MarshalSend(
        CoreMessaging::Calling::SendProcessor *this,
        char *a2,
        unsigned int a3,
        double *a4)
{
  char *v6; // rcx
  char *v7; // rcx
  bool v8; // zf
  char *v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // rcx
  unsigned int v12; // r10d
  unsigned int v13; // edx
  int *v14; // r9
  unsigned __int8 *v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  const void *v22; // rdx
  char v23; // cl
  const void *v25; // r8
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  double v34; // xmm0_8
  int v35; // ecx
  char *v36; // rax
  char v37; // cl
  _BYTE *v38; // rax
  __int64 v39; // rax

  if ( ((a3 + 3) & 0xFFFFFFFC) != a3 )
LABEL_46:
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xB4uLL);
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v6 = &a2[a3];
  if ( v6 < a2 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_46;
  }
  *((_QWORD *)this + 13) = v6;
  if ( a3 >= 8 )
  {
    v7 = a2;
    *((_QWORD *)this + 12) = a2 + 8;
  }
  else
  {
    v7 = 0LL;
  }
  *(_DWORD *)v7 = *((_DWORD *)this + 36);
  *((_WORD *)v7 + 2) = *((_WORD *)this + 74);
  *((_WORD *)v7 + 3) = *((_WORD *)this + 75);
  *((_DWORD *)this + 31) = 0;
  v8 = *((_DWORD *)this + 20) == 0;
  v9 = *(char **)this;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( v8 )
    goto LABEL_20;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
      || (v11 = (unsigned int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = v11 + 1, !v11) )
    {
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xE2uLL);
    }
    v12 = *((_DWORD *)this + v10 + 4);
    *v11 = v12;
    *((_DWORD *)this + 21) = v12;
    v13 = (v12 + 3) & 0xFFFFFFFC;
    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v13
      || (v14 = (int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)v14 + v13, !v14) )
    {
      CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xECuLL);
    }
    v15 = (unsigned __int8 *)*((_QWORD *)this + 1);
    v16 = *v15;
    *((_QWORD *)this + 1) = v15 + 1;
    if ( (unsigned __int8)v16 <= 9u )
    {
      if ( (_BYTE)v16 == 9 )
      {
        v34 = *a4++;
        *(float *)v14 = v34;
        goto LABEL_18;
      }
      v26 = v16 - 1;
      if ( !v26 || (v27 = v26 - 1) == 0 || (v28 = v27 - 1) == 0 )
      {
LABEL_32:
        v33 = *(_DWORD *)a4++;
        *v14 = v33;
        goto LABEL_18;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v30 )
          goto LABEL_32;
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_32;
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_32;
        if ( v32 != 1 )
          goto LABEL_34;
      }
LABEL_40:
      v39 = *(_QWORD *)a4++;
      *(_QWORD *)v14 = v39;
      goto LABEL_18;
    }
    v17 = v16 - 10;
    if ( !v17 )
      goto LABEL_40;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_32;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_32;
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v35 = v21 - 1;
        if ( !v35 )
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x178uLL);
        if ( v35 != 1 )
LABEL_34:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
            0x19DuLL);
        CoreMessaging::Calling::SendProcessor::MarshalArray(this, v14, *(const void **)a4);
        v36 = (char *)*((_QWORD *)this + 1);
        a4 += 2;
        v37 = *v36;
        v38 = v36 + 1;
        *((_QWORD *)this + 1) = v38;
        if ( v37 == 14 )
          *((_QWORD *)this + 1) = v38 + 2;
      }
      else
      {
        v22 = *(const void **)a4++;
        *((_QWORD *)this + 1) = v15 + 3;
        memmove(v14, v22, v12);
      }
    }
    else
    {
      v25 = *(const void **)a4++;
      CoreMessaging::Calling::SendProcessor::MarshalArray(this, v14, v25);
    }
LABEL_18:
    v10 = (unsigned int)(*((_DWORD *)this + 31) + 1);
    *((_DWORD *)this + 31) = v10;
  }
  while ( (unsigned int)v10 < *((_DWORD *)this + 20) );
  v9 = (char *)*((_QWORD *)this + 1);
LABEL_20:
  v23 = *v9;
  *((_QWORD *)this + 1) = v9 + 1;
  if ( v23 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1AFuLL);
  return 0LL;
}
