__int64 __fastcall EXLATEOBJ::bMakeXlate(
        XLATE **a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r13d
  __int64 v9; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // r15
  signed __int32 v12; // ecx
  __int64 v13; // r12
  unsigned int *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  struct Gre::Base::SESSION_GLOBALS *v17; // r13
  unsigned int v18; // r15d
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // ecx
  struct Gre::Base::SESSION_GLOBALS *v33; // [rsp+20h] [rbp-10h] BYREF
  __int64 v34; // [rsp+28h] [rbp-8h] BYREF
  __int64 v36; // [rsp+80h] [rbp+50h] BYREF
  __int64 v37; // [rsp+88h] [rbp+58h] BYREF

  v36 = a3;
  v6 = a6;
  v37 = *(_QWORD *)(a4 + 128);
  if ( a6 <= 0x3FFFFFFF && 4 * (unsigned __int64)a6 + 88 > 4 * (unsigned __int64)a6 )
  {
    v9 = AllocThreadBufferWithTag(4 * a6 + 88, 1953265735LL, 0LL);
    *a1 = (XLATE *)v9;
    v11 = v9;
    if ( v9 )
    {
      v33 = Gre::Base::Globals(v10);
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v33 + 962, 1u);
      v13 = a5;
      v14 = (unsigned int *)(v11 + 84);
      *(_DWORD *)(v11 + 36) = -1;
      *(_DWORD *)v11 = v12 + 1;
      *(_DWORD *)(v11 + 12) = v6;
      v15 = (unsigned int)v13;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_DWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 40) = 0LL;
      v16 = v36;
      *(_QWORD *)(v11 + 4) = 2LL;
      *(_QWORD *)(v11 + 16) = v11 + 84;
      *(_QWORD *)(v11 + 48) = v37;
      *(_QWORD *)(v11 + 56) = v16;
      memset_0((void *)(v11 + 4 * (v13 + 21)), 0, 4LL * (v6 - (unsigned int)v13));
      v17 = v33;
      v18 = *(_DWORD *)(v16 + 28);
      v34 = *((_QWORD *)v33 + 5);
      GreAcquireSemaphore(v34);
      v19 = v37;
      if ( !v37 || (*(_DWORD *)(v37 + 24) & 0x800) != 0 )
      {
        if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v36) )
        {
          if ( !v37 )
            goto LABEL_33;
          v25 = *(_QWORD *)(v16 + 80);
          if ( v25 )
          {
            if ( (_DWORD)v13 )
            {
              do
              {
                v26 = *a2;
                if ( (unsigned int)v26 >= v18 )
                  v26 = (unsigned int)v26 % v18;
                ++a2;
                *v14++ = *(unsigned __int8 *)(v26 + v25 + 4);
                --v15;
              }
              while ( v15 );
            }
            goto LABEL_49;
          }
          if ( !v37 )
          {
LABEL_33:
            v27 = *(_QWORD *)(v16 + 72);
            if ( v27 )
            {
              if ( (_DWORD)v13 )
              {
                do
                {
                  v28 = *a2;
                  if ( (unsigned int)v28 >= v18 )
                    v28 = (unsigned int)v28 % v18;
                  ++a2;
                  *v14++ = *(unsigned __int8 *)(v28 + v27 + 4);
                  --v15;
                }
                while ( v15 );
              }
              goto LABEL_49;
            }
          }
          if ( (_DWORD)v13 )
          {
            do
            {
              v29 = *a2;
              if ( v29 >= v18 )
                v29 %= v18;
              v30 = *(unsigned int *)(*(_QWORD *)(v16 + 112) + 4LL * v29);
              if ( HIBYTE(*(_DWORD *)(*(_QWORD *)(v16 + 112) + 4LL * v29)) == 2 )
              {
                v31 = (unsigned __int8)v30;
                if ( (unsigned __int16)v30 < 0x100u )
                  v31 = (unsigned __int16)v30;
              }
              else
              {
                v33 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v17 + 750);
                v31 = XEPALOBJ::ulDispatchGFPEFunction(&v33, *((unsigned int *)v33 + 24), v30);
                if ( v31 >= 0xA )
                  v31 += 236;
              }
              *v14 = v31;
              ++a2;
              ++v14;
              --v15;
            }
            while ( v15 );
          }
          goto LABEL_49;
        }
        if ( (_DWORD)v13 )
        {
          do
          {
            v24 = *a2;
            if ( v24 >= 0x14 )
              v24 %= 0x14u;
            if ( v24 >= 0xA )
              v24 += 236;
            ++a2;
            *v14++ = v24;
            --v15;
          }
          while ( v15 );
        }
      }
      else if ( (_DWORD)v13 )
      {
        while ( 1 )
        {
          v20 = *a2;
          if ( v20 >= v18 )
            v20 %= v18;
          v21 = *(unsigned int *)(*(_QWORD *)(v16 + 112) + 4LL * v20);
          if ( HIBYTE(*(_DWORD *)(*(_QWORD *)(v16 + 112) + 4LL * v20)) == 2 )
          {
            v22 = *(_DWORD *)(v19 + 28);
            if ( v22 )
            {
              v23 = (unsigned __int16)v21;
              if ( (unsigned __int16)v21 >= v22 )
                v23 = (unsigned __int16)v21 % v22;
            }
            else
            {
              v23 = 0;
            }
          }
          else
          {
            v23 = XEPALOBJ::ulDispatchGFPEFunction(&v37, *(unsigned int *)(v19 + 96), v21);
          }
          *v14 = v23;
          ++a2;
          ++v14;
          if ( !--v15 )
            break;
          v19 = v37;
        }
      }
LABEL_49:
      XLATE::vCheckForTrivial(*a1);
      SEMOBJ::vUnlock((SEMOBJ *)&v34);
      return 1LL;
    }
  }
  return 0LL;
}
