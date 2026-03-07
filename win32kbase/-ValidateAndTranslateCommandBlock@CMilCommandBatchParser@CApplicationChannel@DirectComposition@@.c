__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandBlock(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this,
        int *a2,
        unsigned int a3)
{
  int v3; // r9d
  __int64 v7; // rdi
  int v8; // ecx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rsi
  _DWORD *v11; // rsi
  int v12; // ecx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rsi
  _DWORD *v15; // rsi
  unsigned int *v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r14
  int v21; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v21 = 0;
  while ( a3 >= 8 )
  {
    v7 = (unsigned int)*a2;
    if ( (v7 & 3) != 0 || (unsigned int)v7 < 8 || (unsigned int)v7 > a3 )
    {
      v3 = -1073741811;
      v21 = -1073741811;
      goto LABEL_40;
    }
    switch ( a2[1] )
    {
      case 334:
        if ( (unsigned int)v7 >= 0x10 )
        {
          DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
            this,
            a2 + 2,
            145,
            0,
            &v21);
          v3 = v21;
          v16 = (unsigned int *)(a2 + 4);
          v17 = v7 - 16;
          if ( v21 < 0 )
            goto LABEL_38;
          do
          {
            if ( v17 < 8 )
              break;
            v18 = *v16;
            v19 = v18;
            v3 = v18 <= v17
               ? DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
                   this,
                   v16 + 1,
                   v18)
               : -1073741811;
            v16 = (unsigned int *)((char *)v16 + v19);
            v21 = v3;
            v17 -= v19;
          }
          while ( v3 >= 0 );
          if ( v3 < 0 || !v17 )
            goto LABEL_38;
        }
LABEL_37:
        v21 = -1073741811;
        v3 = -1073741811;
        goto LABEL_38;
      case 390:
        if ( (_DWORD)v7 != 24 )
          goto LABEL_37;
        v12 = a2[2];
        v13 = *(_QWORD **)this;
        v14 = (unsigned int)(v12 - 1);
        if ( v12
          && v14 < v13[10]
          && (_mm_lfence(), (v15 = *(_DWORD **)(v13[11] * v14 + v13[7])) != 0LL)
          && (DirectComposition::CResourceMarshaler::IsDerivedResourceType(v15[9], 196)
           || (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 184LL))(v15) && !a2[4]) )
        {
          a2[2] = v15[8];
        }
        else
        {
          v21 = -1073741811;
        }
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 3,
          196,
          1,
          &v21);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 4,
          196,
          1,
          &v21);
LABEL_27:
        v3 = v21;
        goto LABEL_38;
      case 392:
        if ( (_DWORD)v7 != 12 )
          goto LABEL_37;
        v8 = a2[2];
        v9 = *(_QWORD **)this;
        v10 = (unsigned int)(v8 - 1);
        if ( !v8 )
          goto LABEL_37;
        if ( v10 >= v9[10] )
          goto LABEL_37;
        _mm_lfence();
        v11 = *(_DWORD **)(v9[11] * v10 + v9[7]);
        if ( !v11
          || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v11[9], 196)
          && !(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 184LL))(v11) )
        {
          goto LABEL_37;
        }
        a2[2] = v11[8];
        goto LABEL_27;
    }
    v3 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
           this,
           a2 + 1,
           v7);
    v21 = v3;
LABEL_38:
    a2 = (int *)((char *)a2 + v7);
    a3 -= v7;
LABEL_40:
    if ( v3 < 0 )
      break;
  }
  if ( v3 >= 0 && a3 )
    return (unsigned int)-1073741811;
  return (unsigned int)v3;
}
