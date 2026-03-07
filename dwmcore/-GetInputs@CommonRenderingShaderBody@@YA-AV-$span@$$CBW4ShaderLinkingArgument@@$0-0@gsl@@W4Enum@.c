_QWORD *__fastcall CommonRenderingShaderBody::GetInputs(_QWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  void *v4; // rax

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( !v3 )
      {
        *a1 = 2LL;
        v4 = &unk_180398474;
        goto LABEL_7;
      }
      if ( v3 != 1 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
        return a1;
      }
      *a1 = 3LL;
    }
    else
    {
      *a1 = 2LL;
    }
  }
  else
  {
    *a1 = 1LL;
  }
  v4 = &unk_180352454;
LABEL_7:
  a1[1] = v4;
  return a1;
}
