// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::AddRangeToTree(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // r8
  char v7; // bl
  ULONG_PTR v8; // rax
  __int64 result; // rax
  _QWORD *v10; // r14
  struct _RTL_BALANCED_NODE *v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rax
  struct _RTL_BALANCED_NODE *v13; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  ULONG_PTR v15[2]; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-28h]

  v4 = a2;
  WdLogSingleEntry2(3LL, a3, a2);
  v7 = 0;
  v8 = *(_QWORD *)(a3 + 56);
  v15[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v15[1] = v8;
  v16 = 0;
  switch ( (_DWORD)v4 )
  {
    case 0:
      v10 = a1 + 6;
      v11 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            v14 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v14 = v11->Children[1];
            if ( !v14 )
            {
LABEL_8:
              v7 = 1;
              goto LABEL_9;
            }
          }
          v11 = v14;
        }
      }
      goto LABEL_9;
    case 1:
      v10 = a1 + 7;
      v11 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            v13 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_9;
          }
          else
          {
            v13 = v11->Children[1];
            if ( !v13 )
              goto LABEL_8;
          }
          v11 = v13;
        }
      }
      goto LABEL_9;
    case 2:
      v10 = a1 + 8;
      v11 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v15, v11) < 0 )
          {
            v12 = v11->Children[0];
            if ( !v11->Children[0] )
              break;
          }
          else
          {
            v12 = v11->Children[1];
            if ( !v12 )
              goto LABEL_8;
          }
          v11 = v12;
        }
      }
LABEL_9:
      LOBYTE(v6) = v7;
      result = RtlAvlInsertNodeEx(v10, v11, v6, a3);
      goto LABEL_10;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  result = WdLogSingleEntry5(0LL, 270LL, 52LL, 13LL, v4, 0LL);
LABEL_10:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
