/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00AE86C
 * Callers:
 *     CoreUICallSendVaList @ 0x1C00AE220 (CoreUICallSendVaList.c)
 * Callees:
 *     ?MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z @ 0x1C00AEA8C (-MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C0275688 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C02756E4 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
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
  unsigned int v9; // r8d
  _DWORD *v10; // r9
  int v11; // ecx
  unsigned int v12; // r8d
  int *v13; // r9
  unsigned __int8 *v14; // rax
  int v15; // ecx
  unsigned __int8 *v16; // r8
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  const void *v23; // rdx
  __int64 v24; // rax
  char *v25; // rax
  char v26; // cl
  const unsigned __int16 *v28; // r8
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  char *v35; // rax
  char v36; // cl
  _BYTE *v37; // rax

  if ( ((a3 + 3) & 0xFFFFFFFC) != a3 )
LABEL_48:
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xB4uLL);
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v6 = &a2[a3];
  if ( v6 < a2 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_48;
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
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( !v8 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
        || (v10 = (_DWORD *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = v10 + 1, !v10) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xE2uLL);
      }
      v11 = *((_DWORD *)this + v9 + 4);
      *v10 = v11;
      *((_DWORD *)this + 21) = v11;
      v12 = (v11 + 3) & 0xFFFFFFFC;
      if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v12
        || (v13 = (int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)v13 + v12, !v13) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xECuLL);
      }
      v14 = (unsigned __int8 *)*((_QWORD *)this + 1);
      v15 = *v14;
      v16 = v14 + 1;
      *((_QWORD *)this + 1) = v14 + 1;
      if ( (unsigned __int8)v15 <= 8u )
        break;
      v17 = v15 - 9;
      if ( !v17 )
      {
        *(float *)v13 = *a4;
        goto LABEL_37;
      }
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_38;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_36;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_36;
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v34 = v22 - 1;
          if ( !v34 )
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x178uLL);
          if ( v34 != 1 )
LABEL_44:
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x19DuLL);
          CoreMessaging::Calling::SendProcessor::MarshalArray(this, v13, *(const void **)a4);
          v35 = (char *)*((_QWORD *)this + 1);
          a4 += 2;
          v36 = *v35;
          v37 = v35 + 1;
          *((_QWORD *)this + 1) = v37;
          if ( v36 == 14 )
            *((_QWORD *)this + 1) = v37 + 2;
        }
        else
        {
          v23 = *(const void **)a4;
          v24 = 2LL;
          ++a4;
          do
          {
            ++v16;
            --v24;
          }
          while ( v24 );
          *((_QWORD *)this + 1) = v16;
          memmove(v13, v23, *((unsigned int *)this + 21));
        }
      }
      else
      {
        v28 = *(const unsigned __int16 **)a4++;
        CoreMessaging::Calling::SendProcessor::MarshalLPCWSTR(this, v13, v28);
      }
LABEL_21:
      v9 = ++*((_DWORD *)this + 31);
      if ( v9 >= *((_DWORD *)this + 20) )
        goto LABEL_22;
    }
    if ( (_BYTE)v15 != 8 )
    {
      if ( !v15 )
        goto LABEL_44;
      v29 = v15 - 1;
      if ( !v29 || (v30 = v29 - 1) == 0 || (v31 = v30 - 1) == 0 )
      {
LABEL_36:
        *v13 = *(_DWORD *)a4;
LABEL_37:
        ++a4;
        goto LABEL_21;
      }
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 && (unsigned int)(v33 - 1) > 1 )
          goto LABEL_44;
        goto LABEL_36;
      }
    }
LABEL_38:
    *(double *)v13 = *a4;
    goto LABEL_37;
  }
LABEL_22:
  v25 = (char *)*((_QWORD *)this + 1);
  v26 = *v25;
  *((_QWORD *)this + 1) = v25 + 1;
  if ( v26 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1AFuLL);
  return 0LL;
}
