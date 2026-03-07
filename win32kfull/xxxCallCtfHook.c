__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int128 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  int v9; // ebp
  __int16 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 v18; // r8
  int v19; // r9d
  struct _KTHREAD *v20; // rcx
  int v21; // [rsp+40h] [rbp-78h] BYREF
  __int64 v22[3]; // [rsp+48h] [rbp-70h] BYREF
  int v23; // [rsp+60h] [rbp-58h]
  int v24; // [rsp+64h] [rbp-54h]

  v4 = 0;
  v5 = a1;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v21 = 0;
  v10 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 856LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 456LL) )
        {
          v11 = *(__int64 **)(gptiCurrent + 464LL);
          v12 = *v11;
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v11 + 16)) & 0x400) == 0
            || (v20 = (struct _KTHREAD *)*gptiCurrent,
                v24 = 0,
                v22[0] = (unsigned int)PsGetThreadId(v20),
                v23 = a2,
                v22[2] = a3,
                v22[1] = (__int64)a4,
                !(unsigned int)xxxCallHook(0, v5, (__int64)v22, 9)) )
          {
            v13 = v5 - 2;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 2;
                if ( v15 )
                {
                  if ( v15 != 2 )
                    return v4;
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(v9, a3, a4, 0LL, *(_QWORD *)(gpsi + 856LL), &v21);
                }
                else if ( a2 == 5 )
                {
                  return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL));
                }
                else
                {
                  return (unsigned int)fnHkINDWORD(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v21);
                }
              }
              else
              {
                return (unsigned int)fnHkINLPMSG(v9, a3, a4, 0LL, *(_QWORD *)(gpsi + 856LL), 0, &v21);
              }
            }
            else
            {
              v18 = *((_QWORD *)PtiCurrentShared(v12) + 55);
              if ( v18 )
                v10 = InternalMapVirtualKeyEx((unsigned int)a3, 0LL, *(_QWORD *)(*(_QWORD *)(v18 + 48) + 32LL));
              if ( a3 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
                LODWORD(a3) = (*(unsigned __int16 *)(gptiCurrent + 882LL) << 16) | 0xE7;
              return (unsigned int)fnHkINLPCHARHOOKSTRUCT(v9, a3, (_DWORD)a4, v19, *(_QWORD *)(gpsi + 856LL));
            }
          }
        }
      }
    }
  }
  return 0LL;
}
