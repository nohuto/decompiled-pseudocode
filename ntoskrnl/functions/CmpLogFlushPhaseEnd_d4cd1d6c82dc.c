NTSTATUS __fastcall CmpLogFlushPhaseEnd(__int64 a1, char a2, int a3)
{
  NTSTATUS result; // eax
  char v4; // [rsp+30h] [rbp-68h] BYREF
  int v5; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  char *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C04328 > 4 )
  {
    v4 = a2;
    v7 = &v4;
    v9 = 0;
    v8 = 1;
    v10 = &v5;
    v12 = 0;
    v5 = a3;
    v11 = 4;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C04328,
             (unsigned __int8 *)word_14003672A,
             0LL,
             0LL,
             4u,
             &v6);
  }
  return result;
}
