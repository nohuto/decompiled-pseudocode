__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateRenderDataInstructionGenerated(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this,
        int *a2,
        int a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v10; // r11
  int *v11; // rdx
  bool v12; // zf
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // r11
  int v18; // r8d
  __int64 v19; // r11
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  bool v24; // zf
  unsigned int v25; // [rsp+48h] [rbp+18h] BYREF

  v3 = *a2;
  result = 0LL;
  v25 = 0;
  if ( v3 > 0x1C0 )
  {
    v20 = v3 - 449;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
      {
        v12 = a3 == 40;
        goto LABEL_16;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( a3 == 12 )
        {
          v11 = a2 + 1;
          v18 = 196;
          goto LABEL_19;
        }
        return 3221225485LL;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 && a3 == 12 )
        {
          v11 = a2 + 1;
          v18 = 186;
          goto LABEL_19;
        }
        return 3221225485LL;
      }
      v24 = a3 == 8;
    }
    else
    {
      v24 = a3 == 40;
    }
    if ( v24 )
      return result;
    return 3221225485LL;
  }
  if ( v3 == 448 )
  {
    if ( a3 == 28 )
    {
      v11 = a2 + 1;
      v18 = 95;
      goto LABEL_19;
    }
  }
  else
  {
    v6 = v3 - 443;
    if ( !v6 )
    {
      v12 = a3 == 16;
      goto LABEL_16;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 && a3 == 16 )
          {
            DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
              this,
              a2 + 1,
              68,
              1,
              &v25);
            v11 = (int *)(v10 + 8);
LABEL_18:
            v18 = 85;
            goto LABEL_19;
          }
          return 3221225485LL;
        }
        v12 = a3 == 28;
LABEL_16:
        if ( v12 )
        {
          v11 = a2 + 1;
          goto LABEL_18;
        }
        return 3221225485LL;
      }
      if ( a3 == 32 )
      {
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          a2 + 1,
          67,
          1,
          &v25);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          (int *)(v13 + 8),
          25,
          1,
          &v25);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          (int *)(v14 + 12),
          25,
          1,
          &v25);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          (int *)(v15 + 16),
          62,
          1,
          &v25);
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          (int *)(v16 + 20),
          62,
          1,
          &v25);
        v11 = (int *)(v17 + 24);
        v18 = 62;
LABEL_19:
        DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
          this,
          v11,
          v18,
          1,
          &v25);
        return v25;
      }
    }
    else if ( a3 == 16 )
    {
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        95,
        1,
        &v25);
      v11 = (int *)(v19 + 8);
      v18 = 67;
      goto LABEL_19;
    }
  }
  return 3221225485LL;
}
