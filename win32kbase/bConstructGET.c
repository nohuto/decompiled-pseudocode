__int64 __fastcall bConstructGET(__int64 a1, __int64 a2, struct EDGE *a3, struct _RECTL *a4)
{
  struct _POINTFIX *v4; // r12
  struct _KTHREAD *CurrentThread; // r13
  struct _POINTFIX *v9; // rdi
  struct _POINTFIX *i; // rbx
  struct _POINTFIX *v11; // rdx
  struct _POINTFIX *v12; // rbp
  struct _POINTFIX *v13; // rax
  unsigned __int64 v14; // r13
  struct EDGE *v15; // rax
  struct _KTHREAD *v17; // [rsp+78h] [rbp+10h]

  *(_QWORD *)a2 = a2;
  v4 = 0LL;
  *(_DWORD *)(a2 + 16) = 0x7FFFFFFF;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v17 = CurrentThread;
  for ( i = *(struct _POINTFIX **)(*(_QWORD *)(a1 + 8) + 32LL); ; i = (struct _POINTFIX *)*i )
  {
    if ( !i )
      return 1LL;
    if ( PsIsThreadTerminating(CurrentThread) )
      break;
    v11 = i + 3;
    v12 = i + 4;
    v13 = i + 3;
    if ( (i[2].x & 1) == 0 )
    {
      v12 = i + 3;
      v13 = v9;
      v11 = v4;
    }
    v9 = v13;
    v4 = v11;
    if ( v12 < &i[(unsigned int)i[2].y + 3] )
    {
      v14 = (unsigned __int64)&i[(unsigned int)i[2].y + 3];
      do
      {
        v15 = AddEdgeToGET((struct EDGE *)a2, a3, v9, v12, a4);
        v9 = v12;
        a3 = v15;
        ++v12;
      }
      while ( (unsigned __int64)v12 < v14 );
      CurrentThread = v17;
    }
    if ( (i[2].x & 2) != 0 )
    {
      a3 = AddEdgeToGET((struct EDGE *)a2, a3, v9, v4, a4);
      v9 = 0LL;
    }
  }
  return 0LL;
}
